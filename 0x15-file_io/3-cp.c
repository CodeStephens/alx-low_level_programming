#include "main.h"


/**
 * _err_call - check for error code and give appropriate error message
 * @stat: error code to be checked
 *
 * Description:
 * Return: nothing!
 */
void _err_call(int error_value, ...)
{
	va_list list;

	va_start(list, error_value);
	if (error_value == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (error_value == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file ");
		dprintf(STDERR_FILENO, "%s\n", va_arg(list, char *));
		exit(98);
	}
	else if (error_value == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to ");
		dprintf(STDERR_FILENO, "%s\n", va_arg(list, char *));
		exit(99);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd ");
		dprintf(STDERR_FILENO, "%d\n", va_arg(list, int));
		exit(100);
	}
	va_end(list);
}

/**
 * main - program entry point
 * @argc: number of command line arguments
 * @argv: pointer to array of arguments passed in the command line
 *
 * Description:
 * Return: integer (98 for read error, 99 for write err, 100 for close err,
 * and 0 sucess)
 */
int main(int argc, char **argv)
{
	int f_open, output, f_open_r, output_w;
	char *temp;

	if (argc != 3)
		_err_call(97);
	if (argv[1] == NULL)
		_err_call(98, argv[1]);
	if (argv[2] == NULL)
		_err_call(99, argv[2]);
	f_open = open(argv[1], O_RDONLY);
	if (f_open < 0)
		_err_call(98, argv[1]);
	output = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (output < 0)
		_err_call(99, argv[2]);
	temp = malloc(BUFSIZ * sizeof(char));
	if (temp == NULL)
		return (1);
	f_open_r = read(f_open, temp, BUFSIZ);
	if (f_open_r < 0)
		_err_call(98, argv[1]);
	while (f_open_r > 0)
	{
		output_w = write(output, temp, f_open_r);
		if (output_w == -1)
			_err_call(99, argv[2]);
		f_open_r = read(f_open, temp, BUFSIZ);
		if (f_open_r < 0)
			_err_call(98, argv[1]);
	}
	if (close(f_open) < 0)
		_err_call(100, f_open);
	if (close(output) < 0)
		_err_call(100, output);
	free(temp);
	return (0);
}
