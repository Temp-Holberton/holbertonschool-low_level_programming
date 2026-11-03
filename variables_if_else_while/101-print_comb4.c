#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits,
 *        separated by a comma and a space, in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j;
	int k;

	while (i <= 55)
	{
		j = i + 1;
		while (j <= 56)
		{
			k = j + 1;
			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
