#ifndef main_h
#define main_h

	#include <stdio.h>
	#include <stdlib.h>
	typedef struct op
	{
		char *op;
		int (*f)(int a, int b);
	} op_t;
	int (*get_op_func(char *s))(int, int);

#endif /* main_h */
