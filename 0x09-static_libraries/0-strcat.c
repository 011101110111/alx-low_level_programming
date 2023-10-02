#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings.
 *
 * @dest: first array.
 *
 * @src: second array.
 *
 * Return: dest.
*/
#include "main.h"

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	for (; *p != '\0'; p++)
	{
	}
		for (; *src != '\0'; src++)
		{
			*p = *src;
			p++;
		}
	return (dest);
}
