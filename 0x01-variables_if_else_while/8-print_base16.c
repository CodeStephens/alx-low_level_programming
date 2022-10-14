#include <stdio.h>
  
/** 
 * main - prints out all numbers in base 16 in lowercase 
 * 
 * Description: putchar() is strictly used for ouputting the numbers
 * Return: 0 is ouputted for successful code execution
 */ 
int main(void)
{
    int num;
    char ch;
    for (num = 0; num <= 9; num++)
        putchar(num+'0');
    for (ch = 'a'; ch <= 'f'; ch++)
        putchar(ch);
    putchar('\n');
    return (0);
}
