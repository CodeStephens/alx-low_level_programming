#include <stdio.h>

/**
  * main - program entry point
  *
  * Description: computes the first 50 fibonacci numbers
  * Return: nothing due to the void nature of the function datatype
  */
int main(void)
{
	int count = 0;

	unsigned long int initializingNum = 1;
	unsigned long int initializingNum2 = 2;
	unsigned long int nextNum;

	while (count <= 98)
	{
		if (count == 0)
			printf("%lu", initializingNum);
		else if (count == 1)
			printf(", %lu", initializingNum2);
		else
		{
			nextNum = initializingNum + initializingNum2;
			printf(", %lu", nextNum);
			initializingNum =  initializingNum2;
			initializingNum2 = nextNum;
		}

		count++;
	}

	printf("\n");
	return (0);
}
