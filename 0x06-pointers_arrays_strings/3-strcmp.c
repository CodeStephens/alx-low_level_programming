#include "main.h"

/**
 * _strcmp - compares two strings for equality, less than or greater than
 * @s1: first function parameter string
 * @s2: second function parameter string
 *
 * Description:
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			result = 0;
			s1++;
			s2++;
		}
		else
		{
			if (*s1 > *s2)
			{
				result = 15;
				break;
			}
			else
			{
				result = -15;
				break;
			}
		}
	}
	return (result);
}
