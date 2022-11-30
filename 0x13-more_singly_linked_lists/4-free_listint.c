#include "lists.h"

/**
 * free_listint - frees the listint_t list
 * @head: pointer to head of the listint_t lists
 *
 * Return: nothing!
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	
	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
