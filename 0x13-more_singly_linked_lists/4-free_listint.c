#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the head of the listint_t list
 */

void free_listint(listint_t *head)
{
	listint_t *ptr0, *ptr1;

	for (ptr0 = head; ptr0 != NULL; ptr0 = ptr1)
	{
		ptr1 = ptr0->next;
		free(ptr0);
	}
}
