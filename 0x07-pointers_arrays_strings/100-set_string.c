#include "main.h"

/**
 * set_string - sets the value of a pointer to a character
 * @**s: pointer to pointer character whose value is to be set
 * @to: character that the pointer will be set to
 *
 * Description:
 * Return: nothing!
 */
void set_string(char **s, char *to)
{
	s = &to;

	while (**s != '\0')
	{
		**s = *to;
		s++;
	}
}
