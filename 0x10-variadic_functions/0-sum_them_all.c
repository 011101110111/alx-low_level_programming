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
	va_list args;

	int n, count;

	if (n == 0)
		return (0);

	va_start(args, count);

	sum = 0;

	for (n = 0; n < count; n++)
		sum += va_arg(args, int);

	va_end(args);
		return (sum);
}
