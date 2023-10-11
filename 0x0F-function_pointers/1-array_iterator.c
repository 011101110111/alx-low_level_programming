#include "function_pointers.h"

/**
 * array_iterator - maps in array through a fun pointer
 * @array: the int array
 * @size: a size of array
 * @action: function poniter
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
