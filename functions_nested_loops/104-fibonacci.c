#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int count, l = 1000000000;
	unsigned long int bef1 = 1, bef2 = 2;
	unsigned long int aft1 = 0;
	unsigned long int l_bef1, l_bef2, l_aft1, l_aft2;

	printf("%lu, %lu, ", bef1, bef2);
	for (count = 3; count <= 92; count++)
	{
		aft1 = bef1 + bef2;
		bef1 = bef2;
		bef2 = aft1;
		if (count != 92)
			printf("%lu, ", aft1);
		else
			printf("%lu", aft1);
	}

	l_bef1 = bef1 / l;
	bef1 = bef1 % l;
	l_bef2 = bef2 / l;
	bef2 = bef2 % l;

	for (; count <= 98; count++)
	{
		l_aft1 = l_bef1 + l_bef2;
		l_aft2 = bef1 + bef2;
		if (l_aft2 >= l)
		{
			l_aft1 += l_aft2 / l;
			l_aft2 %= l;
		}
		l_bef1 = l_bef2;
		l_bef2 = l_aft1;
		bef1 = bef2;
		bef2 = l_aft2;
		printf(", %lu%09lu", l_aft1, l_aft2);
	}
	printf("\n");
	return (0);
}
