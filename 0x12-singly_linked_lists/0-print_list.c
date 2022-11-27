#include "lists.h"

/**
 * print_list - prints all the elements of the list_t list
 * @h: pointer to struct
 *
 * Return: integer
 */
size_t print_list(const list_t *h)
{
	int count;

	count = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return	(count);
}
