#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: head of node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *new = head;
	int count = 0;

	if (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		new = new->next;
	}
	return (count);
}
