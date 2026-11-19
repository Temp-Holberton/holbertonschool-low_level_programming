#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to previously allocated memory.
 * @old_size: Size in bytes of allocated space for ptr.
 * @new_size: New size in bytes for the new memory block.
 *
 * Return: Pointer to reallocated memory, or NULL on failure or free.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *src, *dst;
	unsigned int min_size, i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	min_size = (new_size < old_size) ? new_size : old_size;
	src = ptr;
	dst = new_ptr;

	i = 0;
	while (i < min_size)
	{
		dst[i] = src[i];
		i++;
	}

	free(ptr);
	return (new_ptr);
}
