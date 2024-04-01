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
	size_t len;

	newNode->str = strdup(str);
	len = strlen(str);

	newNode->len = len;
	newNode->next = *head;

	*head = newNode;

	return (*head);

}
