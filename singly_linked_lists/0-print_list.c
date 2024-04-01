#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function to print argument
 * @h: argument to print
 * Return: h
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("[%u] ", h->len);

		if (h->str != NULL)
			printf("%s\n", h->str);

		else if (h->str == NULL)
		{
			printf("(nil)\n");
		}

		h = h->next;

		i++;
	}

	return (i);
}
