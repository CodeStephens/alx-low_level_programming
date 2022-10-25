#include "main.h"

/**
 * _atoi - conversion of string to integer
 * @s: given character pointer function parameter
 *
 * Description:
 * Return: 0
 */
int _atoi(char *s)
{
	int len1 = 0;
	int len2;
	int len3;
	int len4 = 0;

	len3 = 1;
	while ((*(s + len1) < '0' || *(s + len1) > '9') && (*(s + len1)
				!= '\0'))
	{
		if (*(s + len1) == '-')
			len3 *= -1;
		len1++;
	}
	len2 = len1;
	while ((*(s + len2) >= '0') && (*(s + len2) <= '9'))
	{
		len4 = len4 * 10 + len3 * (*(s + len2) - '0');
		len2++;
	}
	return (len4);
}
