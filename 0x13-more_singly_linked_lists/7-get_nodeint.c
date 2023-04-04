#include "lists.h"

/**
 * get_nodeint_at_index -finds the nth node of a list (listint_t)
 * @head: pointer to the head of the list (listint_t)
 * @index: index of the node
 *
 * Return: the nth node (success), NULL (fail)
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		i++;
	}

	return (head);
}
