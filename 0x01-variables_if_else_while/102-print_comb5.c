#include <stdio.h>

/**
 * main - outputs all possible combinations of two two-digit numbers
 *
 * Description: the range is from 0-99,separated by a comma followed by a space
 *
 * Return: for successful execution of coe, print 0
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			putchar(' ');
			putchar(num2 + '0');
			putchar((num2 + '0');

			if (num1 == 98 && num2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
