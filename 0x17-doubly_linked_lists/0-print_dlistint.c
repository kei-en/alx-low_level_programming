#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a list (dlistint_t)
 * @h: the head of the list (dlistint_t)
 *
 * Return: the number of nodes in the list (success)
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
