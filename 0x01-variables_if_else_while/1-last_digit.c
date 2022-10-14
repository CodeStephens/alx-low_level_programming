#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - prints out the last digit of a random number
 *Description: the usage of rand and its relative functions are used here
 *Return: 0 is outputted for successful execution of the program
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}
	return (0);
}
