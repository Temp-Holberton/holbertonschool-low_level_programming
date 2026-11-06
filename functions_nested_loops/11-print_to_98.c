#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all integers from n to 98, followed by a new line.
 * @n: The starting integer.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n--;
		}
	}
}
