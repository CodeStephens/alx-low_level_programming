#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given index/node position
 * @head: pointer to listint_t linked list
 * @idx: index position to where the node is added
 * @n: data(n) at the node insertion
 *
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;
	listint_t *placeHolder;
	unsigned int i = 1;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (*head == NULL && idx == 0)
	{
		(*head)->next = NULL;
		(*head)->n = n;
	}
	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	placeHolder = (*head)->next;
	while (placeHolder)
	{
		if (idx == i)
		{
			temp->next = new;
			new->next = placeHolder;
			return (new);
		}
		temp = placeHolder;
		placeHolder = placeHolder->next;
		i++;
	}
	if (placeHolder == NULL && i == idx)
	{
		temp->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
