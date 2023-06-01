#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of list
 * @head: head of node
 * @str: sting
 * Return: 0
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;

	list_t *newhead = malloc(sizeof(list_t));

	while (str[len])
		len++;

	if (newhead == NULL)
	{
		return (NULL);
	}
	else
	{
		newhead->str = strdup(str);
		newhead->len = len;
		newhead->next = *head;
		*head = newhead;
	}
	return (*head);
}
