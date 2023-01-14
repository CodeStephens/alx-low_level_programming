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
	dlistint_t *temp, *temp1;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	while (count <= idx && *h != NULL)
	{
		temp = *h;
		temp1 = (*h)->next;
		if (count == idx)
		{
			newNode->prev = temp;
			newNode->next = temp1;
			temp->next = newNode;
			temp1->prev = newNode;
			return (newNode);
		}
		*h = (*h)->next;
		count++;
	}
	return (NULL);
}
