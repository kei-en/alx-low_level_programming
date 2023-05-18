#include "lists.h"

/**
 * get_dnodeint_at_index - locates a node in a list (dlistint_t)
 * @head: head of the list (dlistint_t)
 * @index: node to locate
 *
 * Return: address of the located node (success), NULL (fail)
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
