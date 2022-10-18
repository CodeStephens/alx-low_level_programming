#include "main.h"

/**
 * jack_bauer - prints the minutes timestamp from 00:00 to 23:59
 *
 * Description: for_loop will be used in achieving this
 * Return: 0 for successful code execution
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else
			{
				_putchar((i/10) + '0');
				_putchar((i%10) + '0');
			}
			_putchar(':')
			if (j < 10)
			{
				_putchar('0');
				_putchar(j + '0');
			}
			else
			{
				_putchar((j/10) + '0');
				_putchar((j%10) + '0');
			}
			_putchar('\n');
		}
	}
	return (0);
}
