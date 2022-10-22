#include <stdio.h>
#include <math.h>

/**
 * main - Entry point to the program
 *
 * Description: prints out the largest prime number to the standard output
 * Return: 0 for successful code execution
 */
int main(void)
{
	unsigned long int N;
	unsigned long int maxPrime;
	int count;

	N = 612852475143;
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
	if (N > 2)
		max = n;
	return (0);
}
