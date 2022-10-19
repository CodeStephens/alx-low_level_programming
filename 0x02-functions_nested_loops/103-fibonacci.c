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
	long int sum = 0;

	while (initializingNum2 >= 3000000 && initializingNum2 <= 4000000)
	{
		if (initializingNum == 0)
			printf("%ld", initializingNum);
		else if (initializingNum2 == 1)
			printf(", %ld", initializingNum2);
		else
		{
			nextNum = initializingNum + initializingNum2;
			printf(", %ld", nextNum);
			initializingNum =  initializingNum2;
			initializingNum2 = nextNum;
		}
	}
	return (0);
}
