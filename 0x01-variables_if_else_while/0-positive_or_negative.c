#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - the function identifies positive, negative or zero of a random number
 *
 *Description: random number is generated and tested for postivity
 *Return: 0 is ouputted for sucessful execution of function
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n = 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
