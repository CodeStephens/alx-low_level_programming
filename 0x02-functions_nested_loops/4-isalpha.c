#include "main.h"

/**
 *_isalpha - Checks if the argument is an alphabetic character
 *@c: the declared parameter to be checked
 *
 * Description: logical test is carried to determine if the argument is an
 * alphabet or not
 * Return: 1 is returned if its an alphabet, else 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		if (c > 90 && c <97)
			return (1);
		else
			return (0);
	}
	else
		return (1);
}
