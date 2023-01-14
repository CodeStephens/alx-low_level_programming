#include "lists.h"

/**
 * delete_nodeint_at_index - inserts a node at a given index/node position
 * @head: pointer to listint_t linked list
 * @index: node position to delete
 *
 * Return: integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *placeHolder;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	placeHolder = *head;
	temp = (*head)->next;
	while (temp)
	{
		if (index == i)
		{
			placeHolder->next = temp->next;
			free(temp);
			return (1);
		}
		placeHolder = temp;
		temp = temp->next;
		i++;
	}
	return (-1);
}
