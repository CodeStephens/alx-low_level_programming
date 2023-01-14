#include "variadic_functions.h"

/**
 * print_all - print all items in the argument to the console
 * @format: pointer to string format (c, i, f & s) to be printed
 *
 * Return: nothing!
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int n = 0;
	int len = 0;
	char *delimiter = ", ";
	char *str;

	va_start(args, format);

	while (format && format[len])
		len++;

	while (format && format[n])
	{
		if (n  == (len - 1))
			delimiter = "";
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(args, int), delimiter);
			break;
		case 'i':
			printf("%d%s", va_arg(args, int), delimiter);
			break;
		case 'f':
			printf("%f%s", va_arg(args, double), delimiter);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, delimiter);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(args);
}
