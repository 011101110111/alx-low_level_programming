#include "main.h"

#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new string.
 *
 * @str: Memory for the new string is obtained with malloc.
 *
 * Return: d.
*/

char *_strdup(char *str)
{
	int i, size;
	char *s;

	if (str == NULL)
		return (NULL);

	for (size = 0; size[str] != '\0'; size++)
		s = malloc(size * sizeof(*str) + i);


	if (s == NULL)
		return (NULL);

	else
	{
		for (i = 0; i < size; i++)
		s[i] = str[i];
	}
	return (s);
}
