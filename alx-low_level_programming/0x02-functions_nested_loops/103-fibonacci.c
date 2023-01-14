#include <stdio.h>

/**
  * main - program entry point
  *
  * Description: computes the first 50 fibonacci numbers
  * Return: nothing due to the void nature of the function datatype
  */
int main(void)
{

	long int initializingNum = 1;
	long int initializingNum2 = 2;
	long int nextNum;
	long int sum = initializingNum2;

	while (initializingNum2 <= 3500000)
	{
		nextNum = initializingNum + initializingNum2;
		initializingNum =  initializingNum2;
		initializingNum2 = nextNum;
		if (initializingNum2 % 2 == 0)
			sum += initializingNum2;
	}
	printf("%ld\n", sum);
	return (0);
}
