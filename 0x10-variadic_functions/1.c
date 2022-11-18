#include "variadic_functions.h"

/**
 * print_char - prints a character to the console
 * @args: variadic function arguments
 *
 * Return: nothing!
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_string - prints a character to the console
 * @args: variadic function arguments
 *
 * Return: nothing!
 */
void print_string(va_list args)
{
	char *str;
	
	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_int - prints an integer to the console
 * @args: variadic function arguments
 *
 * Return: nothing!
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - prints an float to the console
 * @args: variadic function arguments
 *
 * Return: nothing!
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}	
/**
 * _strlen - evaluates the length of string in 'format'
 * @format: pointer to the string format
 *
 * Return: integer
 */
int _strlen(char *str)
{
	int i, len;

	i = 0;
	while (str[i] != '\0')
		i++;
	len = i - 1;
	return (len);
}
/**
 * print_all - prints every argument to the standard output
 * @format: list of argument types
 *
 * Return: nothing!
 */
void print_all(const char * const format, ...)
{
	int num_args;
	int i;
	typedef struct {
		char a;
		void func;
	}format_array;

	format_array operands[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	num_args = _strlen(format);
	va_list args;
	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < num_args)
		{
			if (operands[j].a == format[i])
			{
				operands[j].func(args, va_arg
						(args, char void));
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
