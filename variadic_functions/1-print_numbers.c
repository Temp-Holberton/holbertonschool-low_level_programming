#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers separated by a string, followed by a newline
 * @separator: string printed between numbers (or NULL if omitted)
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
