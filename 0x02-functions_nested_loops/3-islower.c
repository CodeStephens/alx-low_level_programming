#include "main.h"

/**
 *_islower - checks for lowercase validity of inputted character
 *@parameter c: the declared integer to be checked
 *
 * Description: if conditional statement is use for the logical test on
 * c declared as integer
 * Return: 1 if 'c' is lowercase, else 0
 */
int _islower(int c) /**parameter c is declared as an integer*/
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
