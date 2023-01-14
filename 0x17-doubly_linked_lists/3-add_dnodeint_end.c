#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: pointer to the address of the head of the linked lists
 * @n: data value of the new node to be added
 *
 * Description:
 * Return: pointer to the newly added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;

	temp = *head;
	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	while (temp)
		temp = temp->next;
	newNode->n = n;
	newNode->prev = temp;
	temp->next = newNode;
	newNode->next = NULL;
	if (*head == NULL)
	{
		(*head)->prev = NULL;
		*head = newNode;
	}
	return (newNode);
}
