#include "lists.h"

/**
 * free_listint - frees a list of ints
 * @head: pointer to first node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		node = *head;
		node = node->next;
		free(head);

	}
}
