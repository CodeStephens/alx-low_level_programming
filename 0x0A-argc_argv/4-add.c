#include "main.h"

/**
 * main - Entry point to the program, add positive numbers
 * @argc: argument count
 * @argv: array of argument variable
 * checkNum - checks for only digits in decimal base in the given arguments
 * @num: character pointer referencing each element in the argument array
 * Return: integer
 */
int checkNum(char *num)
{
	while (*num != '\0')
	{
		if (isalpha(*num))
			return (0);
		num++;
	}
	return (1);
}
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]) && atoi(argv[i]) >= 0
					&& (checkNum(argv[i])))
				sum += atoi(argv[i]);
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
