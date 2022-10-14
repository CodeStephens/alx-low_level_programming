#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main - prints out the last digit of a random number 
 *
 *Description: the usage of rand and its relative functions are used here
 *Return: 0 is outputted for successful execution of the program
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastDigit;
	lastDigit = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and 0\n", n, lastDigit);
	}
	return (0);
}
