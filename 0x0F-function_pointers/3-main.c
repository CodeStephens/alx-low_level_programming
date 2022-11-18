#include "3-calc.h"

/**
 * main - entry point to the program
 * @argc: number of arguments passed to the function
 * @argv: array of arguments passed to the function
 *
 * Return: 0!
 */
int main(int argc, char *argv[])
{
	int i, x, y;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i < 5; i++)
	{
		if (argv[3] == ops.op[i])
		{
			x = atoi(argv[2]);
			y = atoi(argv[4]);
			printf("%d", ops.f[i](x, y));
			return (0);
		}
	}
	printf("Error\n");
	exit(99);
}
