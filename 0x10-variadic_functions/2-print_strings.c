#include "variadic_functions.h"

/**
 * print_strings - print string to the console
 * @n: number of integers passed to the function
 * @separator: pointer to the string to be printed between numbers
 *
 * Return: nothing!
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *each_word;

	if (n == 0)
		return;
	if (separator == NULL)
		return;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		each_word = va_arg(args, char *);
		if (i == n - 1 && each_word != NULL)
			printf("%s\n", each_word);
		if (i == n - 1 && each_word == NULL)
			printf("(nil)\n");
		if (i < n - 1)
		{
			if (each_word != NULL)
				printf("%s%c ", each_word, *separator);
			else
				printf("(nil)%c ", *separator);
		}
	}
	va_end(args);
}
