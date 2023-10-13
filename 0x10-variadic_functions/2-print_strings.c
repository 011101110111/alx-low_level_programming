#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings -  prints strings, followed by a new line with separator
 * @n: the nunmber of string
 * @separator: the string separator
 * @...: the integer of number
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list s;
char *str;

va_start(s, n);

for (i = 0; i < n; i++)
{
	str =  va_arg(s, char *);

	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}
printf("\n");
va_end(s);
}
