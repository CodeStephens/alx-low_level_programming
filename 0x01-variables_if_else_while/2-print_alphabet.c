#include <stdio.h>

/**
 *main - prints out letters of English alphabet in a single line
 *
 *Description: uses the putchar function (twice) to achieve this
 *Return: 0 is printed out for successful program execution
 */
int main(void)
{
	char c;
	for (ch = 'a'; ch <= 'z'; ch++)
        putchar(ch);
        putchar('\n');
	 return (0);
}
