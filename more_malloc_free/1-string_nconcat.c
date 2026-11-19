#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates s1 with at most n bytes of s2.
 * @s1: First string.
 * @s2: Second string.
 * @n: Maximum number of bytes to take from s2.
 *
 * Return: Pointer to newly allocated null-terminated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, use_n, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	use_n = (n >= len2) ? len2 : n;

	concat = malloc(sizeof(char) * (len1 + use_n + 1));
	if (concat == NULL)
		return (NULL);

	while (i < len1)
	{
		concat[i] = s1[i];
		i++;
	}
	while (j < use_n)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = '\0';

	return (concat);
}
