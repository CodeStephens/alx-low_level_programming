#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *     
 * Description: combinations are to be in ascending order, separated by space
 * Return: 0 is outputted for successful execution of code.
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 0; num1 < 8; num1++)
	{
		for (num2 = num1 + 1; num2 < 9; num2++)
		{
			for (num3 = num2 + 1; num3 < 10; num3++)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');

				if (num1 == 7 && num2 == 8 && num3 == 9)
					continue;
				
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}