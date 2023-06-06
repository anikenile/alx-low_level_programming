#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given location
 * @head: head of node
 * @idx: index position
 * @n: list
 * Return: address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i;

	if (head == NULL || new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}

	for (i = 0; i < idx && new; )
	{
		if (i == idx - 1)
		{
			new->next = (*head)->next;
			(*head)->next = new;
			return (new);
		}
		else
			new = new->next;
	}
	return (NULL);
}
