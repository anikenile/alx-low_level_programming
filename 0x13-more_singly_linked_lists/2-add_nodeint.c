#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add node at beginning of list
 * @n: list
 * @head: head of list
 * Return: address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newHead = (listint_t *)malloc(sizeof(listint_t));

	if (newHead == NULL)
		return (NULL);

	newHead->n = n;
	newHead->next = *head;
	*head = newHead;
	return (newHead);
}
