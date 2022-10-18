#include "main.h"

/**
 *_islower - checks for lowercase validity of inputted character
 *@ c: integer parameter declared with function
 *
 * Description: if conditional statement is use for the logical test on
 * c declared as integer
 * Return: 1 if 'c' is lowercase, else 0
 */
int _islower(int c) /*@c: integer parameter declared*/
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
