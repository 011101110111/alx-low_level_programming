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
	unsigned int i;
	char *s;

	if (size == 0 || s == 0)
		return (Null);

	s = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);

}
