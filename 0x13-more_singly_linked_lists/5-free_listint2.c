#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of node
 */
void free_listint2(listint_t **head)
{
	listint_t *newHead = *head;

	if (head == NULL)
		return;

	while (*head)
	{
		newHead = (*head)->next;
		free(*head);
		*head = newHead;
	}
	*head = NULL;
}
