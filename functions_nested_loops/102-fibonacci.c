#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by comma followed by a space, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int t1 = 1, t2 = 2, nextTerm;

	for (i = 1; i <= 50; i++)
	{
		if (i == 1)
		{
			printf("%ld", t1);
		}
		else if (i == 2)
		{
			printf(", %ld", t2);
		}
		else
		{
			nextTerm = t1 + t2;
			t1 = t2;
			t2 = nextTerm;
			printf(", %ld", nextTerm);
		}
	}
	printf("\n");
	return (0);
}
