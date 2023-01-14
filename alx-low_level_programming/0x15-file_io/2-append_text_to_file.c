#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: pointer to the file which append call is to be executed on
 * @text_content: content to be appended
 *
 * Description:
 * Return: integer (1 for sucess, -1 for fail)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_open, result, i;

	if (filename == NULL)
		return (-1);
	f_open = open(filename, O_WRONLY | O_APPEND);
	if (f_open < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i] != '\0'; i++)
		;
	result = write(f_open, text_content, i);
	if (result < 0)
		return (-1);
	close(f_open);
	return (1);
}
