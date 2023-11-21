#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements
 * in a linked listint_t list.
 * @h: pointer to the head of the listint_t list.
 * Return: returns integer
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int count_nodes = 0;

	for (ptr = h; ptr; ptr = ptr->next)
	{
		count_nodes++;
	}

	return (count_nodes);
}
