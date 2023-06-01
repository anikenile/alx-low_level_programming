#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: list to free
 */
void free_list(list_t *head)
{
	free(head);
}
