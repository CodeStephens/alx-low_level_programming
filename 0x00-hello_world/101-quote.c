#include <stdio.h>
#include <unistd.h>

/**
 *main - outputting standard error
 *
 *Description: the code snippets aim to redirect code error message to a file
 *Return: 1 is the value printed in the event of error
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 58);
	return (1);
}
