#include "lists.h"

/**
 * add_nodeint - add new node at the beginning of the listint_t list
 * @h: pointer to head of the listint_t lists
 * @n: integer to add at the beginning of the linked list
 *
 * Return: pointer to the newly added element
 */
listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *temp;
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	*h = new;
	new->next = temp;
	new->n = n;
	return (new);
}