#include "main.h"

/**
 * _puts - prints string to the console
 * @str: functional parameter string
 *
 * Description: uses putchar and loop to access the address of the string
 * and output the same to the standard output
 * Return: nothing!
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
