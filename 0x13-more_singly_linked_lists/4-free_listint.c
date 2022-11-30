#include "lists.h"

/**
 * free_listint - frees the listint_t list
 * @head: pointer to head of the listint_t lists
 *
 * Return: nothing!
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
}
