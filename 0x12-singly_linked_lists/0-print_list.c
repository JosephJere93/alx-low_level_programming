#include "lists.h"
#include "stddef.h"
#include "stdio.h"

/**
 * print_listint - prints elements of a linked list
 * @h: linked list of type listint_t
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;
	
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	
	return (s);
}
