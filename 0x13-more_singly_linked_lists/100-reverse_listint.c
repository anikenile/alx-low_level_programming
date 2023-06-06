#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of node
 * Return: a pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previousNode = NULL;
	listint_t *nextNode = NULL;

	while (*head != NULL)
	{
		nextNode = (*head)->next;
		(*head)->next = previousNode;
		previousNode = *head;
		*head = nextNode;
	}
	*head = previousNode;
	return (*head);
}
