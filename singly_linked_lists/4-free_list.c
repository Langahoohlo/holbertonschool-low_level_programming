#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function to free up memory
 * @head: ......
 */

void free_list(list_t *head)
{
	list_t *free_up;

	while ((free_up = head) != NULL)
	{
		head = head->next;
		free(free_up->str);
		free(free_up);
	}
}
