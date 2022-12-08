#include "main.h"

/**
 * create_file - creates a file and inputs certain content into it
 * @filename: name of the file to be created
 * @text_content: content to be written into the file
 *
 * Description:
 * Return: integer
 */
int create_file(const char *filename, char *text_content)
{
	int f_open, result, i;

	if (filename == NULL)
		return (-1);
	f_open = open(filename, O_CREAT | O_RDWR, 0600);
	if (text_content == NULL)
		return (1);
	if (f_open < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i] != '\0'; i++)
		;
	result = write(f_open, text_content, i);
	if (result < 0 || result != i)
		return (-1);
	close(f_open);
	return (1);
}
