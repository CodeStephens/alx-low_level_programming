#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: integer parametr to be checked
 *
 * Description: checks for case sensitivity of inputted character
 * Return: 1 if the inputted character is uppercase, else 0
 */
int _isupper(int c)

{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
