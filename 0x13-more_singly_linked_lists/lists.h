#ifndef main_h
#define main_h

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

	#include <string.h>
	#include <stdio.h>
	#include <stdlib.h>
	int _putchar(int c);
	size_t print_listint(const listint_t *h);

#endif /* main_h */
