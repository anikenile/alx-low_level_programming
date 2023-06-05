#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds node at end
 * @head: head of node
 * @n: list to add
 * Return: address or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));
	listint_t *last = *head;

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (NULL);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (new);
}
