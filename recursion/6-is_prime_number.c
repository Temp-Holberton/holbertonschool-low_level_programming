#include "main.h"

/**
 * _check_divisor - Recursively tests odd divisors up to sqrt(n).
 * @n: Candidate prime integer (n >= 3, odd).
 * @d: Current odd divisor to test (d >= 3).
 *
 * Return: 1 if no divisor divides n, 0 if a divisor is found.
 */
int _check_divisor(int n, int d)
{
	if (n % d == 0)
		return (0);
	if (d > n / d)
		return (1);

	return (_check_divisor(n, d + 2));
}

/**
 * is_prime_number - Determines whether an integer is a prime number.
 * @n: Integer to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);

	return (_check_divisor(n, 3));
}
