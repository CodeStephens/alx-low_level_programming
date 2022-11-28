#include "lists.h"

/**
 * print_listint - evaluates the number of node in a linked listint_t
 * @h: pointer to head of the listint_t lists
 *
 * Return: integer
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int count = 0;

	temp = h;
	if ( temp == NULL)
		return (0);
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
