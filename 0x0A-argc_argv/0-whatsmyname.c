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
	char name;
	name = argv;
	
	while (name != '\0')
	{
		_putchar(name);
		name++;
	}
	return 0;
}

