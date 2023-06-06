#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head node
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *deleteHead;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	n = (*head)->n;
	deleteHead = (*head);
	(*head) = (*head)->next;
	free(deleteHead);
	return (n);
}
