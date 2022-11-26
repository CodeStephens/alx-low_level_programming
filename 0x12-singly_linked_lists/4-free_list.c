#include "lists.h"

/**
 * free_list - frees list_t list
 * @head: pointer to the head of list_t
 *
 * Return: nothing!
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
