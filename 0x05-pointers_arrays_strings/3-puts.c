#include "main.h"

/**
 *  _puts  -  prints a string, followed by a new line
 *
 * @str: string parameter to print
 *
 * Return: Nothing
*/
void _puts(char *str)
{
	for (*str <= 0; *str != '\0'; str++)
		_putchar (*str + 0);
	_putchar ('\n');
}