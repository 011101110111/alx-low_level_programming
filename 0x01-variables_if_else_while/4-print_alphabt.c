#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (success)
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && != 'e')
			c++;
		putchar(c);
		c++;
	}

	putchar ('\n');
	Return(0);
}
