#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at nth index
 * @head: pointer to listint_t linked list
 * @index: index position to get the node
 *
 * Return: integer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	listint_t *len;
	unsigned int i;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	len = head;
	while (len)
	{
		count++;
		len = len->next;
	}
	if (index < count - 1)
		return (NULL);
	for (i = 0; i < count; i++)
	{
		if (index == i)
			break;
		temp = temp->next;
	}
	return (temp);
}
