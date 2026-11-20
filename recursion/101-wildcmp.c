#include "main.h"

/**
 * _skip_stars - Advances past consecutive '*' wildcard characters.
 * @s2: Pattern string pointer.
 *
 * Return: Pointer to first non-'*' character (or '\0').
 */
char *_skip_stars(char *s2)
{
	if (*s2 != '*')
		return (s2);

	return (_skip_stars(s2 + 1));
}

/**
 * wildcmp - Compares two strings where s2 may contain '*' wildcards.
 * @s1: First string.
 * @s2: Second string (may contain '*').
 *
 * Return: 1 if strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	char *next_s2;

	if (s1 == NULL || s2 == NULL)
		return (0);

	if (*s2 == '*')
	{
		next_s2 = _skip_stars(s2);
		if (wildcmp(s1, next_s2))
			return (1);
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
		return (0);
	}

	if (*s1 == '\0')
		return ((*s2 == '\0') ? 1 : 0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
