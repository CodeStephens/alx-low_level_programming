#include "lists.h"

/**
 * print_dlistint - prints all the elements and number of elements in a list
 * @h: pointer to the head of the linked lists
 *
 * Description:
 * Return: number of the elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *temp;

	if (h == NULL)
		return (1);
	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
