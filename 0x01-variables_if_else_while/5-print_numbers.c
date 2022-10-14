#include <stdio.h>
  
/** 
 * main - prints out all single digit in base ten starting from 0 
 * 
 * Description: single digits will be written to standard ouput
 * Return: 0 for successful execution of codes
 */ 
int main(void)
{
	int count = 0;
    	while (count < 10)
    	{
	    printf("%d",count);
    	    count++;
	}	    
	printf("\n");
    	return (0);
}
