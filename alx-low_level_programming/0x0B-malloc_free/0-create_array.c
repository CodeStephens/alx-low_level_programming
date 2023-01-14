#include "main.h"

/**
 * *create_array - create a given number of character array
 * @size: the number of array elements
 * @c: array initialization character
 *
 * Description:
 * Return: character
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
