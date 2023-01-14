#include "lists.h"

/**
 * dlistint_len - evaluates the number of elements in a list
 * @h: pointer to the head of the linked lists
 *
 * Description:
 * Return: number of the elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	if (h == NULL)
		return (0);
	temp = h;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
