#include "main.h"

/**
 * rev_string - prints a given string in reverse to the console
 * @s: given functional parameter (type string)
 *
 * Description: a loop and _putchar is utilized to achieve this aim
 * Return: nothing!
 */
void rev_string(char *s)
{
	int len = 0;

	while (*(s + len))
		len++;
	len -= 1;
	while (len >= 0)
	{
		_putchar(*(s + i));
	}
}
