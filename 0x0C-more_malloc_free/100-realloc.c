#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: previous size in bytes of the memory space for the pointer
 * @new_size: new size in bytes of the new memory block
 *
 * Return: nothing!
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	int i = 0;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(new_ptr);
		exit(1);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	while (ptr[i] != '\0')
	{
		*new_ptr[i] = *ptr[i];
		i++;
	}
	return (new_ptr);
}
