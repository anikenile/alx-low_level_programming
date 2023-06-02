#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: list to free
 */
void free_list(list_t *head)
{
	list_t *freehead;

	while (head != NULL)
	{
		freehead = head;
		head = head->next;
		free(freehead);
	}
}
