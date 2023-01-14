#include "lists.h"

/**
 * list_len - prints the number of elements in list_t list
 * @h: pointer to struct
 *
 * Return: integer
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return	(count);
}
