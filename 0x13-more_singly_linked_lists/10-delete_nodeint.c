#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the index of a linked list
 * @head: pointer to the address of the list (listint_t)
 * @index: index of node to be deleted
 *
 * Return: 1 (success), -1 (fail)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	else
	{
		for (i = 1; i < index; i++)
		{
			if (temp->next == NULL)
				return (-1);

			temp = temp->next;
		}

		current = temp;
		current = current->next->next;
		free(temp->next);
		temp->next = current;
	}

	return (1);
}
