#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the first node of the list.
 **/


void free_listint2(listint_t **head)
{
	listint_t *tmp_store;

	if (head == NULL)
	return;

	for (; *head != NULL; *head = tmp_store)
	{
		tmp_store = (*head)->next;
		free(*head);
	}
}
