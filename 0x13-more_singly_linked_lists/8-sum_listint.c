#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums all elements in the list
 * @head: head of node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *newHead = head;
	int total = 0;

	while (newHead != NULL)
	{
		total = total + newHead->n;
		newHead = newHead->next;
	}
	return (total);
}
