#include <stdio.h>

/**
 * main - prints all combinations of single-digit numbers
 *
 * Description: putchar() is strictly used for the format output
 * Return: 0 is returned for successful code execution
 */
int main(void)
{
	int count = 0;

	for (count = 0; count < 10; count++)
	{
		putchar(count + '0');
		if (count < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
	return (0);
}
