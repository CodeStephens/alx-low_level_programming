#include <stdio.h>

/**
 *main - the function outputs the various sizes of data types in C
 *
 *Description: the printf() and sizeof() are used for this purpose
 *Return: 0 is outputted for a successful program run
 */

int main(void)
{
	char c;
	int i;
	long int j;
	long long int k;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(j));
	printf("Size of a long long int: %d byte(s)\n", sizeof(k));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
