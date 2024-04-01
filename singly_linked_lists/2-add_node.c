#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - function
 * @head: argument to print
 * @str: temp
 * Return: head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = (list_t *)malloc(sizeof(list_t));
	int i;

	if (newNode != NULL)
	{
		free(newNode);
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
	newNode->next = *head;

	*head = newNode;

	return (*head);

}
