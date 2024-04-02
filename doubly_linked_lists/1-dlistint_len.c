#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - ....
 * @h: ....
 * Return: ....
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	
	if (h == NULL)
		return (i);
	
	while (h->prev != NULL)
		h = h->prev;
	
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	
	return (i);
}
