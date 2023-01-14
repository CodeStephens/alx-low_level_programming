#include "main.h"

/**
 * main - Entry point to the program
 * @argc: argument count
 * @argv: array of argument variable
 *
 * Description:
 * Return: integer
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
