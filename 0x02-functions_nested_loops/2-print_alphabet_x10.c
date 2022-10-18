#include "main.h"

/**
 *main -alphabets printed 10 times in lowercase using the user-defined "main.h"
 *
 * Description: prints the word _putchar to the console
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
