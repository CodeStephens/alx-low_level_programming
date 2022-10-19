#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - writes the array of natural numbers in a formatted pattern
 * @n: given parameter during function call
 *
 * Description: the printed numbers are separated by ',' and ' ' to the console
 * Return: 0 for successful code execution
 */
int print_to_98(int n)
{
	int i;
	
	for (i = n; i <= 98; i++)
	{
		if (i < 98)
		{
			printf("%d, ", i);
		}
		else
			printf("%d\n", i);
	}
	return (0);
}
