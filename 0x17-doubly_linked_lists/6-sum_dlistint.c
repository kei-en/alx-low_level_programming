#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a lsit (dlistint_t)
 * @head: head of the list (dlistint_t)
 *
 * Return: sum of all the data in the list (success), 0 (empty list)
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
