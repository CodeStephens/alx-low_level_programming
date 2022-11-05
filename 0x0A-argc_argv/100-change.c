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
	char *initial = argv[1];

	if (argc == 2)
	{
		while (*argv[1] != '\0')
		{
			if (isalpha(*argv[1]))
			{
				printf("Error\n");
				return (1);
			}
			else
				argv[1]++;
		}
		argv[1] = initial;
		coinValue = atoi(argv[1]);
		if (coinValue <= 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			if (coinValue > coins[0])
			{
				countCoins = coinValue / coins[0];
				coinValue %= coins[0];
			}
			for (i = 0; i < 5; i++)
			{
				if (coins[i] <= coinValue)
				{
					coinValue -= coins[i];
					countCoins += 1;
				}
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", countCoins);
	return (0);
}
