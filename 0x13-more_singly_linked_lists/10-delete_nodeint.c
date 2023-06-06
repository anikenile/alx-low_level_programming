#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete specified node
 * @head: head of node
 * @index: index position of node
 * Return: deleted node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *todelete = *head;
	listint_t *delete;
	unsigned int i;

	if (index == 0)
	{
		(*head) = (*head)->next;
		todelete->next = NULL;
		free(todelete);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!todelete || !todelete->next)
			return (-1);
		todelete = todelete->next;
	}
	delete = todelete->next;
	todelete->next = todelete->next->next;
	delete->next = NULL;
	free(delete);
	return (1);
}
