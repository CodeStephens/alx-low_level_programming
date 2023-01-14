#include "main.h"

/**
 * main - Entry point to the program, add positive numbers
 * @argc: argument count
 * @argv: array of argument variable
 *
 * Description:
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	char *initial;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			initial = argv[i];
			if (isdigit(*argv[i]) && atoi(argv[i]) >= 0)
			{
				while (*argv[i] != '\0')
				{
					if (isalpha(*argv[i]))
					{
						printf("Error\n");
						return (0);
					}
					argv[i]++;
				}
				argv[i] = initial;
				sum += atoi(argv[i]);
			}
			else if (isdigit(*argv[i]) && atoi(argv[i]) < 0)
				sum += 0;
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
