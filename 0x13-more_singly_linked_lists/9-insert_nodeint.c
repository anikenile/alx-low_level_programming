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
	listint_t *toinsert = *head;
	unsigned int i = 0;

	if (head == NULL || new == NULL)
		return (NULL);

	new->n = n;

	for ( ; i < idx && toinsert; i++)
	{
		if (i == idx - 1)
		{
			new->next = toinsert->next;
			toinsert->next = new;
			return (new);
		}
		else
			toinsert = toinsert->next;
	}
	return (NULL);
}
