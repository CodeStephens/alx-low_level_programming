#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: nothing!
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
}
