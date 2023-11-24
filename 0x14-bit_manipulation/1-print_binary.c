#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the  binary number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, printed = 0;

	while (bit)
	{
		if (n & L1 << _ _ bit)
		{
			_putchar('1')
				printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
