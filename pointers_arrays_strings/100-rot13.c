#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: Pointer to the string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	int i, j;
	char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (normal[j] != '\0')
		{
			if (s[i] == normal[j])
			{
				s[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}
