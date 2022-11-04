#include "main.h"

/**
 * main - Entry point to the program
 * @argc: argument count
 * @argv: array of argument variable
 *
 * Description:
 * Return: character
 */
int main(int argc, char *argv[])
{
	while (*argv[0] != '\0')
	{
		_putchar(*argv[]);
		argv++;
	}
	return 0;
}

