#include <stdio.h>

/**
 * main - prints the letters of English alphabet in reverse in a single line
 *
 * Description: putchar() is use to output this letters
 * Return: 0 for successful execution of code
 */
int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch > '`'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
