#include "3-calc.h"

/**
 * get_op_func - pointer to the operation functions to be performed
 * @s: symbol(+,*,-,/,%) of operation to be performed
 * @a: first variable/argument
 * @b: second variable/argument
 *
 * Return: integer
 */
int (*get_op_func(char *s))(int &a,int &b)
{
	op_t ops[] = {
		{"+", opp_add},
		{"-", opp_sub},
		{"*", opp_mul},
		{"/", opp_div},
		{"%", opp_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	if (*ops != *s && i == 5)
		return (NULL);
}
