#include "lists.h"

/**
 * listint_len - finds the number of elements in a linked listint_t list
 * @h: the list (listint_t)
 *
 * Return: the number of elements (success)
*/
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++)
		h = h->next;

	return (nodes);
}
