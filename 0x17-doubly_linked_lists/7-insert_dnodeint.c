#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a new node at a given index of the list
 * @h: pointer to the address of the head of the linked lists
 * @n: data value of the new node to be added
 * @idx: index where node insertion is to take place
 *
 * Description:
 * Return: pointer to the newly added node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	temp = *h;
	while (count < idx && temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL && count == idx)
		return (add_dnodeint_end(h, n));
	else if (temp != NULL)
	{
		newNode = malloc(sizeof(dlistint_t));
		if (newNode == NULL)
			return (NULL);
		newNode->n = n;
		newNode->prev = temp->prev;
		newNode->next = temp;
		temp->prev = newNode;
		temp->prev->next = newNode;
		return (newNode);
	}
	return (NULL);
}
