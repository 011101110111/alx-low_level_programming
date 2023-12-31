#include "lists.h"

/**
 * list_len - length of linked list
 *
 * @h: pointier of frist node
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
