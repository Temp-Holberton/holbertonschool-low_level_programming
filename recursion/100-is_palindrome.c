#include "main.h"

/**
 * _strlen_rec - Recursively computes the length of a string.
 * @s: Input string.
 *
 * Return: Length of s.
 */
int _strlen_rec(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_rec(s + 1));
}

/**
 * _check_pal - Recursively checks whether s[left..right] is a palindrome.
 * @s: Input string.
 * @left: Left index.
 * @right: Right index.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int _check_pal(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	if (s[left] != s[right])
		return (0);

	return (_check_pal(s, left + 1, right - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: String to check.
 *
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int len;

	if (s == NULL || *s == '\0')
		return (1);

	len = _strlen_rec(s);
	return (_check_pal(s, 0, len - 1));
}
