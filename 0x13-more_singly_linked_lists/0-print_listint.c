#include "lists.h"

/**
 * print_listint -  prints a linked list
 * @h: pointer to the frist node
 *
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}