#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: the list (listint_t)
 *
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
