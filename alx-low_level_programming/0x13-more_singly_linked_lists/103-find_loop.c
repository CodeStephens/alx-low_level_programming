#include "lists.h"

/**
 * find_listint_loop - finds loop a loop in a linked list
 * @head: pointer to linked list of the struct listint_t datatype
 *
 * Return: pointer of the node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop;
	listint_t *temp;

	loop = head;
	temp = head;
	while (loop != NULL && temp != NULL)
	{
		temp = temp->next;
		loop = loop->next->next;
		if (loop == temp)
		{
			loop = head;
			while (temp != loop)
			{
				temp = temp->next;
				loop = loop->next;
			}
			return (temp);
		}
	}
	return (NULL);
}
