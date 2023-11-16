#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stdlib>
#include <string.h>


size_t print_list(const list_t *h);

/**
 * struct list_s - singly linked list
 * @str:string (malloc string)
 * len: lenth of string
 * @next: pointer to the next node
 */

struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;
}list_t;


#endif
