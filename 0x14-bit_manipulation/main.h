#ifndef main_h
#define main_h

	#include <stdio.h>
	#include <stdlib.h>
	int _putchar(int c);
	int expo(int, int);
	unsigned int binary_to_uint(const char *b);
	void print_binary(unsigned long int n);
	int get_bit(unsigned long int n, unsigned int index);
	int set_bit(unsigned long int *n, unsigned int index);
	int clear_bit(unsigned long int *n, unsigned int index);

#endif /* main_h */
