#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function to free up memory
 * @head: ......
 */

void free_list(list_t *head)
{
	list_t *free_up = head;
	list_t *next_node;

	while (free_up != NULL)
	{
		next_node = free_up->next;
		free(free_up);
		free_up = next_node;
	}
}
