#include "variadic_functions.h"

/**
 * print_numbers - print out numbers to the console
 * @n: number of integers passed to the function
 * @separator: pointer to the string to be printed between numbers
 *
 * Return: nothing!
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", va_arg(args, int));
		if (i < n - 1 && separator != NULL)
			printf("%d%s", va_arg(args, int), separator);
	}
	printf("\n");
	va_end(args);
}
