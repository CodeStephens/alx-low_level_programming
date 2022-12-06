#include "main.h"

/**
 * read_textfile: reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to be read from
 * @letters: number of letters to be read and printed
 *
 * Description:
 * Return: integer
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_open;
	size_t count;

	if (filename == NULL)
		return (0);
	f_open = open(filename, O_CREAT | O_WRONLY | O_APPEND, 600);
	if (f_open < 0)
		return (0);
	count = write(f_open, filename, letters);
	if (count != letters)
		return (0);
	close(f_open);
	return (count);
}
