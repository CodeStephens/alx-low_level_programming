#include "lists.h"

/**
 * add_node - adds node to the beginning of the list_t list
 * @str: string to be duplicated
 * @head: pointer to the head of list_t
 *
 * Return: pointer to the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptrHead;
	int i = 0;

	ptrHead = malloc(sizeof(list_t));
	if (ptrHead == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	ptrHead->len = i;
	ptrHead->str = strdup(str);
	ptrHead->next = *head;
	*head = ptrHead;
	return	(ptrHead);
}
