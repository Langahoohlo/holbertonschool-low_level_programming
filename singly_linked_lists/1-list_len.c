#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function to print number of elements
 * @h: argument to check
 * Return: number to return
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
