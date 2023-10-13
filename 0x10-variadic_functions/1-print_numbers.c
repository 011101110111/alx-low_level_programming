#include "variadic_functions.h"
/**
 *  print_numbers -  prints numbers, followed by a new line with  separator
 * @separator: string separator
 * @n: the number of argument
 * @...: the integer to print
 *
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, i);

	for (i = 0; i < n; i++)
	{
		printf("%d"va_arg(num, int));

	if (separator != NULL)
		printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}
