#include "main.h"

/**
 * _strlen - outputs the length of a string
 * @s: given string to compute its length
 *
 * Description: a loop is used to calculate the string length and pointers 
 * used to manipulate the characters of the string
 * Return: 0 for successful code execution
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len += 1;
		s++;
	}
	_putchar(len + '0');
	return (0);
}
