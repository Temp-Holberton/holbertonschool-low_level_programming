#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: String whose length is measured.
 *
 * Return: Length of s, or 0 if s is NULL or empty.
 */
int _strlen_recursion(char *s)
{
	if (s == NULL || *s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
