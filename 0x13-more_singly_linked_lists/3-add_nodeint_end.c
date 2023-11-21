#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head of a list.
 * @n: integer.
 * Return: address of the new node. NUll if it failed.
 */



listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp_store, *temp_store2;

	temp_store = malloc(sizeof(listint_t));
	if (temp_store == NULL)
	return (NULL);

	temp_store->n = n;
	temp_store->next = NULL;

	if (*head == NULL)
	{
		*head = temp_store;
	return (temp_store);
	}

	for (temp_store2 = *head; temp_store2->next; temp_store2 = temp_store2->next)

	temp_store2->next = temp_store;

	return (temp_store);
}
