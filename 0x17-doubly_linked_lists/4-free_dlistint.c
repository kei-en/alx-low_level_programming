#include "lists.h"

/**
 * free_dlistint - frees a linked list (dlistint_t)
 * @head: head of the list (dlistint_t)
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
