#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase,
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;
	char ch = 'a';

	while (n <= 57)
	{
		putchar(n);
		n++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
