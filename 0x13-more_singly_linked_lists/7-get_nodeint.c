#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Find the nth node of a listint_t linked list
 * @head: Address of the first node in a list.
 * @index: the index of the node, starting at 0
 * Return: Node address otherwise NULL if the doesen't exist
 **/


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)

	return (NULL);

	while (x < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);

		x++;
	}

	return (head);
}
