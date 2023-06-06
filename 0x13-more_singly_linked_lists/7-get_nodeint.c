#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: head of node
 * @index: index position of nodes
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *newNode = head;
	unsigned int i;

	if (!newNode)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		newNode = newNode->next;
	}
	return (newNode);
}
