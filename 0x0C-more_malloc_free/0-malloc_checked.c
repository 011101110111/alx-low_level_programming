#include "main.h"

/**
 * *malloc_checked - allocates memory using mallo and exit if failed
 * @b: int
 * Return: poniter The to arry initalized or NULL
*/

void *malloc_checked(unsigned int b)
{

	int *c = malloc(b);

	if (c == 0)
		exit(98);

	return (c);
}
