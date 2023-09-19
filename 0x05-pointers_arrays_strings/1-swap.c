#include "main.h"

/**
 * swap_int - swap the value of two intagars using two input parameters
 *
 * @a: input parameter 1
 * @b: iinput parameter 2
 *
 * Return: Nothing.
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
