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
	int j;

	for (i = 0; i < n; i++)
	{
		j = 0;
		while (argsv[i][j])
		{
			len++;
			j++;
		}
		len++;
	}
	len++;
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
	int j;
	int k = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	count = av_len(ac, av);
	ptr = (char *) malloc(count * sizeof(char));
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			ptr[k] = av[i][j];
			k++;
			j++;
		}
		ptr[k] = '\n';
		k++;
	}
	return (ptr);
}
