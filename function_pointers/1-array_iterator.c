#include "function_pointers.h"

/**
 * array_iterator - ....
 * @size: ....
 * @action: ....
 * @array: ....
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (; i < size; i++)
	{
		action(array[i]);
	}
}
