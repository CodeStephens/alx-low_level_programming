#include "lists.h"

/**
 * sum_listint - gets the sum of all data(n) of the listint_t linked list
 * @head: pointer to listint_t linked list
 *
 * Return: integer
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	if (temp == NULL)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
