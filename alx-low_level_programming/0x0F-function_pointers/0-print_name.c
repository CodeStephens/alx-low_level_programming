#include "function_pointers.h"

/**
 * print_name - prints a name to the console
 * @name: string to be printed as name
 * @f: function pointer
 *
 * Return: nothing!
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
