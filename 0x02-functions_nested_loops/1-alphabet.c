#include "main.h"

/**
 *print_alphabet - prints the letter of English alphabet
 *
 * Description: uses the _putchar() to printout letters
 * Return:the return statement can be ignored because the function type is void
 */
void print_alphabet(void)
{
	char count = 'a';

	for (count = 'a'; count < '{'; count++)
	{
		_putchar(count);
	}
	_putchar('\n');
}
