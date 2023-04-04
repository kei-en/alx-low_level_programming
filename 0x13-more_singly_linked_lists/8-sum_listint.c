#include "lists.h"

/**
 * sum_listint - gets the sum of all the data of a linked list
 * @head: pointer to the head of the list (listint_t)
 *
 * Return: sum of all the data (success), 0 (if list is empty)
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head;)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
