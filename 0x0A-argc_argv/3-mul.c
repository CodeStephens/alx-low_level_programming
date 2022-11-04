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
	int res;
	
	if (argc == 3)
	{
		res = argv[1] * argv[2];
		printf("%d\n", res);
		return (0);
	}
	printf("Error\n");
	return (1);
}
