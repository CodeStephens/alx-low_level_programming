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

	int initializingNum = 1;
	int intialiazingNum2 = 2;
	int nextNum;

	while (count < 50)
	{
		if (count == 0)
			printf("%d", initializingNum);
		else if (count == 1)
			printf(", %d", initializingNum2);
		else
		{
			nextNum = initializingNum + initializingNum2;
			printf(", %d", nextNum);
			initializingNum1 =  initializingNum2;
			initializingNum2 = nextNum;
		}

		count++;
	}

	printf("\n");
	return (0);
}
