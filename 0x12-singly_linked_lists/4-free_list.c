#include "lists.h"

/**
 * free_list - task which free list_t list
 * @head: the linked lists
 */

void free_list(list_t *head)
{

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		list_t *tmp;

		tmp = head;
		free(tmp->str);
		free(tmp);
		head = head->next;
	}
}
