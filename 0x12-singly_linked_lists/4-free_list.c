#include "lists.h"

/**
 * free_list - frees list_t list
 * @head: pointer to the head of list_t
 *
 * Return: nothing!
 */
void free_list(list_t *head)
{
	int count = 0;
	int i;

	if (head == NULL)
		return;
	if (head != NULL)
		free_list(head->next);
	while (head->next != NULL)
		count++;
	for (i = 0; i < count; i++)
		free(head->str);
	free(head);
}
