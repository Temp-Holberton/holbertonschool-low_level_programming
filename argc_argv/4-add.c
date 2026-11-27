#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive integer command-line arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, or 1 if any argument contains non-digit characters
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
