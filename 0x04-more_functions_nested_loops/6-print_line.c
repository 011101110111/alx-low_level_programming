#include "main.h"

/**
 *  print_line - print  a straight line
 *
 * @n: is the number of times the character _ should be printed
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (c = 1; c <= n; c++)
			_putchar('_');
		_putchar('\n');
	}

}

