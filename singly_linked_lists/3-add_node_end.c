#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - function
 * @head: argument to print
 * @str: temp
 * Return: head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = (list_t *)malloc(sizeof(list_t));
	int i;
	list_t *last;

	if (newNode == NULL)
	{
		exit(EXIT_FAILURE);
	}

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		exit(EXIT_FAILURE);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	newNode->len = i;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = newNode;
	return (*head);
}
