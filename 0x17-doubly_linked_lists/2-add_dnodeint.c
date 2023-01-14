#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: pointer to the address of the head of the linked lists
 * @n: data value of the new node to be added
 *
 * Description:
 * Return: pointer to the newly added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;

	temp = *head;
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	*head = newNode;
	(*head)->n = n;
	(*head)->next = temp;
	(*head)->prev = NULL;
	return (*head);
}
