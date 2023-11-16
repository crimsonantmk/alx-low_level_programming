#include "lists.h"
/**
 * free_list - frees previously allocated memory space
 * @head: pointer to the adress of head (first node)
 * Return: void (nothing)
 */
void free_list(list_t *head)
{
	list_t *tmp_store;

	for (; head;)
	{
		tmp_store = head;
		head = head->next;
		free(tmp_store->str);
		free(tmp_store);
	}
}
