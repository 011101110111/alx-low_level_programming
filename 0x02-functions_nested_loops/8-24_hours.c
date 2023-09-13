#include "main.h"

/**
 * jack_bauer - print every minute of a 24 hour period
 *
 * Return: Nothing
 */

void jack_bauer(void)
{
	int n = 0, d;

	while (n < 24)
	{
		d = 0;

		while (d < 60)
		{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
		_putchar(':');
		_putchar((d / 10) + 48);
		_putchar((d % 10) + 48);
		_putchar('\n');
		
		d++;
		}

		n++;
	}
}
