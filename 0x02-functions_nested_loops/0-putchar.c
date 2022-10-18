#include "main.h"

/**
 *main - Entry point to the program using a defined header file "main.h
 *
 * Description: prints the word _putchar to the console
 * Return: 0 for successful code execution
 */
char main(void)
{
	char *count = "main";

	while (*count)
	{
		_putchar(*count);
		count++;
	}
	_putchar('\n');
	return (0);
}
