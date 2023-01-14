#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to be read from
 * @letters: number of letters to be read and printed
 *
 * Description:
 * Return: integer
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t reader, output, f_open;
	char *temp;

	if (filename == NULL)
		return (0);
	temp = malloc(letters);
	if (temp == NULL)
		return (0);
	f_open = open(filename, O_RDONLY);
	if (f_open < 0)
	{
		free(temp);
		return (0);
	}
	reader = read(f_open, temp, letters);
	if (reader < 0)
	{
		free(temp);
		return (0);
	}
	output = write(STDOUT_FILENO, temp, reader);
	if (output < 0 || output != reader)
	{
		free(temp);
		return (0);
	}
	close(f_open);
	free(temp);
	return (output);
}
