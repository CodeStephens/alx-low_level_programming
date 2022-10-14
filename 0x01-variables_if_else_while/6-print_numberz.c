#include <stdio.h>

/**
 * main - prints out 0-9 on a single line using putchar()
 *
 * Description: the putchar function is solely use to output the digits
 * Return: 0 for successful execution of code
 */
int main(void)
{
	int count = 0;

	for (count = 0; count < 10; count++)
		putchar(count + '0');
	putchar('\n');
	return (0);
}
