#include "lists.h"
#include <stdlib.h>

/**
 * free_list - fress a list_t list.
 *
 * @head: linked list.
 */

void free_list(list_t *head)
{
	list_t temp;

	temp = head;
	while (next != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
