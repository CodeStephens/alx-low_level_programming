#include <stdio.h>

/**
 * main - Entry point to the program
 *
 * Description: uses printf to output 1-100, printing 'fizz' for multiples
 * of 3, 'buzz' for multiples of 5, and 'fizzbuzz' for multiples of both 3
 * and 5
 * Return: always 0
 */
int main(void)
{
	int count;

	for (count = 1; count <= 99; count++)
	{
		if (count != 100)
		{
			if (count % 3 == 0)
				printf("Fizz ");
			else if (count % 5 == 0)
				printf("Buzz ");
			else if (count % 3 == 0 && count % 5 == 0)
				printf("FizzBuzz ");
			else
				printf("%d ", count);
		}
		else
			if (count % 3 == 0)
				printf("Fizz");
			else if (count % 5 == 0)
				printf("Buzz");
			else if (count % 3 == 0 && count % 5 == 0)
				printf("FizzBuzz");
			else
				printf("%d", count);
	}
}
