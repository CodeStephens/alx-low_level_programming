#include "main.h"

/**
 * main - Entry point to the program
 * @argc: argument count
 * @argv: array of argument variable
 *
 * Description:
 * Return: character
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	char *name;
	name = argv[0];
	
	while (*name != '\0')
	{
		_putchar(*name);
		name++;
	}
	_putchar('\n');
	return (0);
}
