#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers,
 *        separated by a comma and a space, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
