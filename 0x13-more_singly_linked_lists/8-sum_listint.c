#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sum up all of the data (n) of a listint_t linked list.
 * @head: pointer to the first node of the list.
 * Return: Integer or 0 if list is empty
 **/

int sum_listint(listint_t *head)
{
	int sum_total = 0;

	for (; head != NULL; head = head->next)
	{
		sum_total += head->n;
	}

	return (sum_total);
}
