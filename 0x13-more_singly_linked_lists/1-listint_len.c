#include "lists.h"

/**
 * listint_len - evaluates the number of node in a linked listint_t
 * @h: pointer to head of the listint_t lists
 *
 * Return: integer
 */
size_t print_listlen(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
