#include "main.h"

/**
 *_islower - checks for lowercase validity of inputted character
 *
 * Description: if conditional statement is use for the logical test
 * Return: 1 if 'c' is lowercase, else 0
 */
int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}	
	else
		return (0);
{
