#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times and you can only use putchar three
 *
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int row, count;

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			if (count > 9)

			{
				_putchar((count / 10) + 48);
			}
			_putchar((count % 10) + 48);
		}
	}
	_putchar ('\n');
}
