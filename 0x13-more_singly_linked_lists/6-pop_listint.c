#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: Pointer to a listint_t linked list.
 * Return: Integer if success, or return 0 is listint_t linked list is empty
 **/

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int node_data;

	if (*head == NULL)
		return (0);

	ptr = *head;
	*head = ptr->next;
	node_data = ptr->n;
	free(ptr);
	return (node_data);
}
