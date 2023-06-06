#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *newHead;

	if (head != NULL)
	{
		newHead = head->next;
		free(head);
		head = newHead;
	}
}
