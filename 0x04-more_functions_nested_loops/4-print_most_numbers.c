#include "main.h"

/**
 * print_most_numbers - print 0 - 9 apart from 2 and 4 and you can
 *
 * only using putchar twice
 *
 * Return: Always 0 (success)
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + '');
		}
	}
	_putchar ('\n');
}
