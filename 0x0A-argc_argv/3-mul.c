#include "main.h"

/**
 * main - Entry point to the program
 * @argc: argument count
 * @argv: array of argument variable
 *
 * Description: multiplies 2 given argument integers and prints the result
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int res = 1;
	int i;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			res *= atoi(*argv[i]);
		printf("%d\n", res);
		return (0);
	}
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
