#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of the listint_t list
 * @head: pointer to head of the listint_t lists
 * @n: integer to add at the beginning of the linked list
 *
 * Return: pointer to the newly added element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
}
