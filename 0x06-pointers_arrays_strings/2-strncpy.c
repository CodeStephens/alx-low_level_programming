#include "main.h"

/**
 * *_strncpy - copies string from source src to another string variable
 * @src: string to be copied
 * @dest: string variable to copy to
 * @n: masximum number of bytes to be copied from src
 *
 * Description:
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
			dest[i] = '\0';
	return dest;
}
