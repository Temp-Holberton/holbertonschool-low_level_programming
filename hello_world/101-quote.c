#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error/Exit status)
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, 61);
	return (1);
}
