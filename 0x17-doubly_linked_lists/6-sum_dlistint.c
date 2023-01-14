#include "lists.h"

/**
 * sum_dlistint - adds all data value at each node of the lists
 * @head: pointer to the address of the head of the linked lists
 *
 * Description:
 * Return: integer
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
