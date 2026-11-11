#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: Pointer to the string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = "aAeEtToOlL";
	char numbers[] = "4433770011";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
			}
			j++;
		}
		i++;
	}

	return (s);
}
