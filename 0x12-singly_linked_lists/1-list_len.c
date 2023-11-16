#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @h: pointer to nest node in the list.
 * Return: number.
 **/
size_t list_len(const list_t *h)
{
	const list_t *tmp_store;
	size_t i = 0;

	for (tmp_store = h; tmp_store != NULL; tmp_store = tmp_store->next)
	{
		i++;
	}
	return (i);
}
