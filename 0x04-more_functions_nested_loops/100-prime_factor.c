#include <stdio.h>
#include <math.h>

/**
 * main - entry point to the program
 * 
 * Description: to print out the largest prime factor of a given number
 * Return: 0 for successful code execution.
 */
int main(void)
{
	unsigned long int N = 612852475143;
	int count;
	maxPrime = -1;

	while(N % 2 == 0)
	{
		maxPrime = 2;
		N /= 2;
	}
	for (count = 3; count <= sqrt(N); count += 2)
	{
		while(N % count == 0)
		{
			maxPrime = count;
			N /= count;
		}
	}
	if(N > 2)
		maxPrime = N;
	}
	printf("The largest prime factor is: %d", maxPrime);
	return (0);
}
