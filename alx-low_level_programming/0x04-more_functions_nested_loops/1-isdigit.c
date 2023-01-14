#include "main.h"

/**
 * _isdigit - checks if the function parameter is a numeral
 * @c: the required function parameter
 *
 * Description: function checks for numerals or otherwise
 * Return: 1 if c is digit, else 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c < 58))
		return (1);
	else
		return (0);
}
