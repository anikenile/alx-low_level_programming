#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - find a loop
 * @head: head of node
 * Return: loop position
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sloop = head;
	listint_t *floop = head;

	while (sloop && floop && floop->next)
	{
		sloop = sloop->next;
		floop = floop->next->next;
		if (sloop == floop)
			return (NULL);
	}
	return (floop);
}
