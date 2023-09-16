#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n : is the number of times the \character should be printed
 */

void print_diagonal(int n)
{
	int c, space;

	if (n <= 0)
		putchar ('\n');
	else
	{
		for (c = 1; c <= n; c++)
		{
			for (space = 1; space <= c; space++)
				putchar(' ');
			_putchar (92);
			_putchar ('\n');
		}
	}
}
