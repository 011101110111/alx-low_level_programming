#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 *
 * @s: pointer at the string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*S);
		_puts_recursion(s + 1);
	}

}
