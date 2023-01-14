#include <stdio.h>

/**
  * main - Entry point into the program
  *
  * Description: the function sums up all multiples of 3 or 5 below 1024
  * Return: 0 if code execution is successful
  */
int main(void)
{
	int count;
	int sum = 0;

	for (count = 0; count < 1024; count++)
	{
		if ((count % 3 == 0) || (count % 5 == 0))
		{
			sum += count;
		}
	}
	printf("%d\n", sum);
	return (0);
}
