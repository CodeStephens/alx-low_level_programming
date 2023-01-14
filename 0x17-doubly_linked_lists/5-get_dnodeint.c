#include "lists.h"

/**
 * get_dnodeint_at_index - locates the node at a specified indes;
 * @head: pointer to the address of the head of the linked lists
 * @index: required index location of the node
 *
 * Description:
 * Return: pointer to the node at the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count <= index && head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
