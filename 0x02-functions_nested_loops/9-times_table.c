#include "main.h"

/**
 * times_table - Print the 9 times table
 *
 * Return: Nothing
 */

void times_table(void)
{
	int n = 0, d, L;

	while (n < 10)
	{
		_putchar(48);
		d = 1;

		while (d < 10)
		{
			_putchar(',');
			_putchar(' ');

			L = n * d;

			if (L <= 9)
			{
				_putchar(' ');
				_putchar(L + 48);
			}
			else
			{
				_putchar((L / 10) + 48);
				_putchar((L % 10) + 48);
			}
			d++;
		}
		n++;
		_putchar('\n');
	}
}
