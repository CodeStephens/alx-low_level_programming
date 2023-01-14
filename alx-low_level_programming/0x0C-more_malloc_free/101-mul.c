#include "main.h"

/**
 * main - entry point to the program, multiplies two positive numbers
 * @argc: number of argument count
 * @argv: array pointer to arguments of the function
 *
 * Return: pointer
 */
int main(int argc, char *argv[])
{
	int mul, i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i <= argc; i++)
	{
		j = 0;
		while (*argv[i] != '\0')
		{
			if (isalpha(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
			j++;
		}
	}
	mul = *argv[1] * *argv[2];
	printf("%d\n", mul);
	return (0);
}
