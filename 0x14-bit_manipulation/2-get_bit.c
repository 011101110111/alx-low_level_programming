#include "main.h"

/**
 *  get_bit - returns the value of a bit at a given
 *  @n: the number is index
 *  @index: the bit to get
 * Return: index or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (1 >> index & 1);
}
