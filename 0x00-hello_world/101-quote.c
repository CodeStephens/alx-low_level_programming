#include <stdio.h>

/**
 *main - outputting standard error
 *
 *Description: the code snippets aim to redirect code error message to a file
 *Return: 1 is the value printed in the event of error
 */

int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19"\n,
			50, 1, stderr);
	return (1);
}
