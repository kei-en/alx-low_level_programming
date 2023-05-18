#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a list (dlistint_t)
 * @h: the head of the list (listint_t)
 *
 * Return: the number of elements in the list (success)
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
