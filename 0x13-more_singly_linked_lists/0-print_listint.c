#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: temporarily holds elemenets of a list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int count_nodes = 0;

	for (ptr = h; ptr; ptr = ptr->next)
	{
		printf("%d\n", ptr->n);
		count_nodes++;
	}

	return (count_nodes);
}
