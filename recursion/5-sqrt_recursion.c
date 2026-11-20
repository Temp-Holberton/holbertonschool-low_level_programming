#include "main.h"

/**
 * _find_sqrt - Recursively searches for the natural square root of n.
 * @n: Target non-negative integer.
 * @guess: Current candidate root (>= 1).
 *
 * Return: Natural square root of n, or -1 if none exists.
 */
int _find_sqrt(int n, int guess)
{
	if (guess > n / guess)
		return (-1);
	if (guess == n / guess && n % guess == 0)
		return (guess);

	return (_find_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Input integer.
 *
 * Return: Natural square root of n, or -1 if n has no natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_find_sqrt(n, 1));
}
