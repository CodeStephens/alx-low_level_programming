#include "3-calc.h"

/**
 * get_op_func - pointer to the operation functions to be performed
 * @s: symbol(+,*,-,/,%) of operation to be performed
 *
 * Return: integer
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t op_s[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (op_s[i].op)
	{
		if (*(op_s[i].op) == *s)
			return (op_s[i].f);
		i++;
	}
	return (NULL);
}
