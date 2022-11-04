#include "main.h"

/**
 * main - Entry point to the program
 * @argc: argument count
 * @argv: array of argument variable
 *
 * Description: adds positive numbers
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
		printf("0\n");
		return (0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]) && atoi(argv[i]) >= 0)
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
