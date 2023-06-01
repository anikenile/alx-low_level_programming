#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: string
 * @list_t: list of elements
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		while (h != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			count++;
		}
	}
	return(count);
}
