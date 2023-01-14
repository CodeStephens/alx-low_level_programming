#include "lists.h"

/**
 * free_dlistint - frees the doubly linked list
 * @head: pointer to the address of the head of the linked lists
 *
 * Description:
 * Return: Nothing!
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
