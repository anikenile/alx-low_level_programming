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
	listint_t *delete = NULL;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	for (i = 0; i < index; )
	{
		if (index == 0)
		{
			*head = (*head)->next;
			free(todelete);
			return (1);
		}
		while (i < index - 1)
		{
			if (!todelete || !(todelete->next))
				return (-1);
			todelete = todelete->next;
			i++;
		}
	}
	delete = todelete->next;
	todelete->next = delete->next;
	free(delete);
	return(1);
}
