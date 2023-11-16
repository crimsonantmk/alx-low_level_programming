#include "lists.h"
/**
 * _strlen - function to find lenght of a given string.
 * @s: first pointer
 * Return: returns the length of the string.
 */

int _strlen(char *s)
{
	int str;

	for (str = 0; s[str] != '\0'; str++)
	{
		str++;
	}

	return (str);
}

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: pointer to the address of head (first node)
 * @str: pointer to the string of each new node
 * Return: address to the new head node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;

	if (!head)
		return (0);
	last = *head;
	new = malloc(sizeof(list_t));
	if (!new)
		return (0);
	new->str = strdup(str);
	new->len = _strlen((char *)str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	for (; last->next; last = last->next)
		last = last->next;
	last->next = new;
	return (*head);
}
