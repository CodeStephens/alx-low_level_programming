#include "main.h"

/** 
 * swap_int - swap two integers
 * @a: first integer
 * @b: second integer
 *
 * Description: performs an exchange of the values of the two integers
 * Return: nothing!
 */
void swap_int(int *a, int *b)
{
	a = &a;
	b = &b;

	*a = &b;
	*b = &a;
	
}
