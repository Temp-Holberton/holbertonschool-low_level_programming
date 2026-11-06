#include "main.h"

/**
 * print_triangle - Prints a triangle using #,
 * followed by a new line.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int row, space, hash;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (space = 0; space < size - row - 1; space++)
			{
				_putchar(' ');
			}
			for (hash = 0; hash <= row; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
