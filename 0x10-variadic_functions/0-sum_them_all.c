#include "variadic_functions.h"

/**
 * sum_them_all -  sum variable arguments
 * @...: the integer of sum
 * @n: the unmber os argument
 *
 * Return: interger sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list cat;

	unsigned int i, sum = 0

	if (!n)
		return (0);

	va_start(cat, n);

	for (i = 0; i < n; i++)
		sum += va_arg(cat, int);

	va_end(cat);
		return (sum);
}
