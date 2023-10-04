#include "main.h"

/**
 *  create_array -  creates an array of chars, and initializes it with a specif
 *
 *  @size: size of the arry
 *
 *  @c: char to initializes
 *
 *  Return: ponitor to the arry initialized or Null
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *n;

	n = malloc(sizeof(char) * size);
	if (size == 0 || n == 0)
		return (0);

	for (i = 0; i < siz; i++)
		n(i) = c;
	return (n);
}
