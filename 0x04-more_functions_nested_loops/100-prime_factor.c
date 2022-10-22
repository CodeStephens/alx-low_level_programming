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
	long long int N;
	unsigned long int maxPrime;
	int count;

	N = 612852475143;
	while (N % 2 == 0)
	{
		maxPrime = 2;
		N = N / 2;
	}
	for (count = 3; count <= sqrt(N); count = count + 2)
	{
		while (N % count == 0)
		{
			maxPrime = count;
			N = N / count;
		}
	}
	if (N > 2)
		maxPrime = N;
	return (0);
}
