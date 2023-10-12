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

	int n;

	if (n == 0)
		return (0);

	va_start(cat, n);

	sum = 0;

	for (n = 0; n < cat; n++)
		sum += va_arg(cat, int);

	va_end(cat);
		return (sum);
}
