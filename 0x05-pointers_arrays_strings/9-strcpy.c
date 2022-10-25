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
	len = 0;
	
	while (*(src + len))
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
