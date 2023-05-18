#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index of list (dlistint_t)
 * @head: pointer to the head of the list (dlistint_t)
 * @index: index of the element in the list (dlistint_t)
 *
 * Return: 1 (success), -1 (fail)
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
