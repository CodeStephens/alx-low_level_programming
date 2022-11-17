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

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		each_word = va_arg(args, char *);
		if (each_word != NULL)
			printf("%s", each_word);
		else
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(args);
}
