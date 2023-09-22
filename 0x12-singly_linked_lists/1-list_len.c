#include "lists.h"

/**
 * list_len - the function that returns link lists
 * @h: This is the sigle list
 *
 * Return: The number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
