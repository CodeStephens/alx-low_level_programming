#include "lists.h"

/**
 * pop_listint - deletes the head node and returns the head node's data
 * @head: pointer to listint_t linked list
 *
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	num = temp->n;
	free(temp);
	return (num);
}
