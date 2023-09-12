#include "lists.h"

/**
 * free_list - frees a list (list_t)
 * @head: pointer the list (list_t)
 *
 * Return: void (success)
*/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
