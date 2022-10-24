#include "main.h"

/**
 * *_strcpy - copies string from one variable to another
 * @dest: given function variable where string is to be copied to
 * @src: given function variable where string is copied from
 *
 * Description: 
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int len;
	int i;
	
	while (*src != '\0')
	{
		len++
		src++;
	}
	for (i = 0; i <= len; i++)
		*(dest + i) = *(src + i);
	return (0);
}
