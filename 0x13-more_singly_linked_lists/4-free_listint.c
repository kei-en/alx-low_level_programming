#include "lists.h"

/**
 * free_listint - frees a listint list
 * @head: pointer to the head of the list (listint_t)
 *
 * Return: void (success)
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
