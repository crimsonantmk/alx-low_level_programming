#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given positiion.
 * @head: pointer to first node
 * @idx: Position of the new node to be inserted into.
 * @n: Data of the new node.
 * Return: Address of the new node, NULL if failed
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *tmp_store;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
	return (NULL);

	if (idx != 0)
	{
		tmp_store = *head;
		while (i < idx - 1 && tmp_store != NULL)
		{
			tmp_store = tmp_store->next;
			i++;
		}

	if (tmp_store == NULL)
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	new_node->next = tmp_store->next;
	tmp_store->next = new_node;

	return (new_node);
}
