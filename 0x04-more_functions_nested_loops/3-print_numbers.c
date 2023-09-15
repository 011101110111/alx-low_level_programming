#include "main.h"

/**
 * print_numbers - print 0 - 9 only using _putchar twice
 *
 *
 * Return: Always 0.
*/
void print_numbers(void);
{
	int  num = 0;

	do {
		_putchar (num + 48);
		num++;

	} while (num >= 0 && numb <= 9);
			putchar ('\n');

}
