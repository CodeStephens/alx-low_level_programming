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
	char *operator;
	int (*res_address)(int, int);
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' && *argv[3] == 0) || (*operator == '%' &&
				*argv[3] == 0))
	{
		printf("Error\n");
		exit(100);
	}
	res_address = get_op_func(operator);
	result = res_address(num1, num2);
	printf("%d\n", result);
	return (0);
}
