#include "main.h"

/**
 * main - program entry point
 * @argc: argument count
 * @argv: character type pointer to array of arguments
 *
 * Description: prints out the minimum number of coins for given value change
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int countCoins = 0;
	int coinValue;
	int i;

	if (argc == 2)
	{
		coinValue = atoi(argv[1]);
		if (coinValue < 0)
			printf("0\n");
		else
			for (i = 0; i < 5; i++)
			{
				if (coins[i] <= coinValue)
				{
					coinValue -= coins[i];
					countCoins += 1;
				}
				else
					printf("0\n");
			}
	}

	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d", countCoins);
	return (0);
}