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
	listint_t *len;
	listint_t *placeHolder;
	unsigned int i;
	unsigned int count = 0;

	if (*head == NULL)
		return (NULL);
	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	len = *head;
	while (len)
	{
		count++;
		len = len->next;
	}
	count -= 1;
	temp = *head;
	for (i = 0; i <= count; i++)
	{
		if (idx == i+1)
		{
			placeHolder = temp->next;
			temp = new;
			new->next = placeHolder;
			return (new);
		}
		temp = temp->next;
	}
	return (NULL);
}
