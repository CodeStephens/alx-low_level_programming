#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of the listint_t list
 * @h: pointer to head of the listint_t lists
 * @n: integer to add at the beginning of the linked list
 *
 * Return: pointer to the newly added element
 */
listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *temp;
	listint_t *new;

	temp = *h;
	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	while (temp != NULL)
		temp = temp->next;
	temp = new;
	new->next = NULL;
	new->n = n;
	return (new);
}
