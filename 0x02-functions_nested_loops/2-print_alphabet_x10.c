#include "main.h"

/**
 *main -alphabets printed 10 times in lowercase using the user-defined "main.h"
 *
 * Description: prints a-z 10 times to  the console using _putchar
 * Return: nothing is return, the function type is void
 */
void print_alphabet_x10(void)
{
	int count = 0;

	for (count = 0; count < 10; count++)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
