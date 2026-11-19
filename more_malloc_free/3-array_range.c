#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max inclusive.
 * @min: Starting integer value.
 * @max: Ending integer value.
 *
 * Return: Pointer to newly allocated array, or NULL on failure or min > max.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, count;

	if (min > max)
		return (NULL);

	count = max - min + 1;
	arr = malloc(sizeof(int) * count);
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < count)
	{
		arr[i] = min + i;
		i++;
	}

	return (arr);
}
