#include "main.h"

/**
 * av_len - computes the character length of the  entire arguments
 * @n: number of arguments passed
 * @argsv: double pointer to the array of arguments
 *
 * Description:
 * Return: integer
 */
int av_len(int n, char **argsv)
{
	int len = 0;
	int i;

	for (i = 0; i < n; i++)
	{
		while (*argsv[i])
		{
			len++;
			argsv[i]++;
		}
	}
	return (len);
}
/**
 * *argstostr - concatenates all the arguments of the program;
 * @ac: argument count during program call
 * @av: double pointer to an array of arguments passed to the program
 *
 * Description:
 * Return: character
 */
char *argstostr(int ac, char **av)
{
	int count;
	int i;
	char *ptr;

	count = av_len(ac, av);
	ptr = (char *) malloc(count * sizeof(char));
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0;i < ac; i++)
	{
		while(av[i])
		{
			ptr[i] = *av[i];
			_putchar(ptr[i]);
			av[i]++;
		}
		_putchar('\n');
	}
	return (ptr);
}
