#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued Fibonacci terms
 *        under 4,000,000, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int t1 = 1, t2 = 2, nextTerm = 0;
	long int sum = 2;

	while (nextTerm <= 4000000)
	{
		nextTerm = t1 + t2;
		if (nextTerm > 4000000)
			break;
		if (nextTerm % 2 == 0)
		{
			sum += nextTerm;
		}
		t1 = t2;
		t2 = nextTerm;
	}

	printf("%ld\n", sum);
	return (0);
}
