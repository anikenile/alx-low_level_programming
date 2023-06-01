#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * list_t - string
 * @h: string
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
