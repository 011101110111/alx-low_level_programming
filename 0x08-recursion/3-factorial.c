#include "main.h"

/**
 * factorial -  factorial of a given number.
 *
 * @n: number.
 *
 * Return: -1 if number less than 0, 1 if 0, n if else.
*/

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * fat(n - 1));
}
