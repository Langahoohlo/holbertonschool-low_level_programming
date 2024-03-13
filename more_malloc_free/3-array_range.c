#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function
 * @min: start point
 * @max: end point
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *resultArray;
	int arraySize, currentIndex;

	if (min > max)
		return (NULL);

	arraySize = max - min + 1;

	resultArray = malloc(sizeof(int) * arraySize);

	if (!resultArray)
		return (NULL);

	currentIndex = arraySize - 1;

	while (max - min)
	{
		resultArray[currentIndex] = max;
		currentIndex--;
		max--;
	}

	return (resultArray);
}
