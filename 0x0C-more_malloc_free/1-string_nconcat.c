#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - concatenates two strings.
 * @s1: frist pointer of string
 * @s2: second pointer of string
 * @n: Number of byet from N2 to concatenates
 *
 * Return:  pointer space  in memory containing string
 *
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a, b, s1_length, s2_length;
	char *s = "";

if (s1 == NULL)
	s1 = s;

if (s2 == NULL)
	s2 = s;
for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
	;

for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
	;

str = malloc(s1_length + n + 1);

if (str == NULL)
{
	return (NULL);
}

for (a = 0; s1[a] != '\0'; a++)

str[a] = s1[a];

		for (b = 0; b < n; b++)
		{
			str[a] = s2[b];
			a++;
		}
		str[a] = '\0';
			return (str);
}
