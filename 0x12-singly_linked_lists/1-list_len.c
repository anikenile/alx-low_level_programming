#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - length of list
 * @h: string
 * Return: 0
 */
size_t list_len(const list_t *h)
{

	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

