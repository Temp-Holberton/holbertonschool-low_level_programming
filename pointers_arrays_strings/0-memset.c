#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to fill.
 * @b: The constant byte to fill with.
 * @n: Number of bytes to be filled.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
