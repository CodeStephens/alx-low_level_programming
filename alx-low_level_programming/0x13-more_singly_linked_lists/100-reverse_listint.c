#include "lists.h"

/**
 * reverse_listint - reverse a listint_t linked list
 * @head: pointer to listint_t linked list
 *
 * Return: integer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *placeHolder;

	if (*head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	placeHolder = *head;
	*head = NULL;
	while (placeHolder)
	{
		temp = placeHolder->next;
		placeHolder->next = *head;
		*head = placeHolder;
		placeHolder = temp;
	}
	return (*head);
}
