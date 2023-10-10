#include "main.h"

/**
 *  *_memset - fills memry to constant byets
 * @s: memry area to failed
 * @b: char to copy
 * @n: number to copy b
 * Return: pointer
 */
void *_memset(char b, char *s, unsigned int n)
{
	 unsigned int i;

	 for (i = 0; i < n; i++)

	 {
		 s[i] = b;
	 }

	return (s);
}

/**
 *  *_calloc -  allocates memory for an array, using malloc
 *
 * @nmemb: arry of length
 * @size: size of each element
 *
 * Return: poniter
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(sizeof(int) * nmemb);

	if (s == 0)
		return (NULL);

	_memset(s, 0, sizeof(int) * nmemb);

	return (s);
}
