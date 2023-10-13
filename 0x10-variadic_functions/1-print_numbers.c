#include "variadic_functions.h"

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
