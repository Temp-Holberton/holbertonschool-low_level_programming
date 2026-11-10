#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the 101-crackme program.
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum = 0;
	int n = 0;

	srand(time(NULL));

	while (sum < 2772 - 127)
	{
		n = rand() % 94 + 33; /* Printable characters from 33 to 126 */
		printf("%c", n);
		sum += n;
	}

	/* Print the final character to hit exactly 2772 */
	printf("%c", 2772 - sum);

	return (0);
}
