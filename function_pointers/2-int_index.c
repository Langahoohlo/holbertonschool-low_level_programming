#include "function_pointers.h"

/**
 * int_index - ....
 * @size: ....
 * @array: ....
 * @cmp: ....
 * Return: ....
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || size == -1 || array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
