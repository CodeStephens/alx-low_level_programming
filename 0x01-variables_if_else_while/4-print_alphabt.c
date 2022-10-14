#include <stdio.h>
  
/** 
 * main - print all letters of the alphabet except q and e 
 * 
 * Description: uses the putchar function to accomplish this
 * Return: 0 if the program execution is successful
 */
int main(void)
{
    char ch = 'a';
    for (ch = 'a'; ch <= 'z'; ch++)
	    if (ch != 'q' && ch != 'e')
	    {		
		    putchar(ch);
	    }
        putchar('\n');
    return (0);
}
