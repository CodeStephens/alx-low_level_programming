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
	listint_t *temp1;
	int num;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	temp = temp->next;
	temp1 = temp->next;
	num = temp->n;
	free(temp);
	(*head)->next = temp1;
	return (num);
}
