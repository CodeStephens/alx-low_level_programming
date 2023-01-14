#include "main.h"

/**
 * _memcpy - copies n bytes of memory area from src to dest
 * @dest: memory location to copy to
 * @src: memory location to copy from
 * @n: size of bytes to be copied from src
 *
 * Return: pointer to the memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
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
	void *new_ptr;
	unsigned int min_value;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (new_ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size < old_size)
		min_value = new_size;
	else
		min_value = old_size;
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	new_ptr = _memcpy(new_ptr, ptr, min_value);
	free(ptr);
	return (new_ptr);
}
