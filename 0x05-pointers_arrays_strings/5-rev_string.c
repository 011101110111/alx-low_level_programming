#include "main.h"


/**
 * rev_string - reverses a string.
 *
 * @s: string paraneter input
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int l, i;
	char tmp;

	for (l = 0; s[l]) != '\0'; ++1);

	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - 1 - i];
		 s[l - 1 - i] = tmp;
	}
}
