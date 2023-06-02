#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 * @head: head of node
 * @str: list to add
 * Return: address of head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *newnode = malloc(sizeof(list_t));
	list_t *newnode2;

	while (str[len])
		len++;

	if (!newnode)
        {
                return (NULL);
        }

	newnode->str = strdup(str);
        newnode->len = len;
        newnode->next = NULL;

	if (*head == NULL)
        {
                *head = newnode;
                return (newnode);
        }
	else
		newnode2 = *head;
	while (newnode2->next != NULL)
        {
                newnode2 = newnode2->next;
	}
	newnode2->next = newnode;

	return (newnode);
}
