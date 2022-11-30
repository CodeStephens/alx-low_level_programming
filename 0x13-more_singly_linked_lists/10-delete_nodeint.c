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
		return (NULL);
	temp = *head;
	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}
	prev_temp = *head;
	current_temp = (*head)->next;
	next_temp = ((*head)->next)->next;
	while (current_temp)
	{
		if (index == i)
		{
			prev_temp->next = next_temp;
			free(current_temp);
			return (1);
		}
		prev_temp = current_temp;
		current_temp = next_temp;
		next_temp = current_temp->next;
		i++;
	}
	if (next_temp == NULL && i == index)
	{
		current_temp->next = NULL;
		return (1);
	}
	return (-1);
}
