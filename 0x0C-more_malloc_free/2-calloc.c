#include "main.h"

/**
 * *_calloc - allocates memory to an array
 * @nmemb: size of array
 * @size: byte size of each element of the array
 *
 * Return: character pointer to an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
	return (ptr);
}
