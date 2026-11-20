#include "main.h"
#include <stdlib.h>

/**
 * print_error - Frees optional buffer, prints "Error\n", and exits with 98.
 * @buf: Optional heap pointer to free before exiting, or NULL.
 */
void print_error(int *buf)
{
	char *msg = "Error\n";
	int i = 0;

	if (buf != NULL)
		free(buf);
	while (msg[i] != '\0')
	{
		_putchar(msg[i]);
		i++;
	}
	exit(98);
}

/**
 * _strlen - Returns the length of a string.
 * @s: Input string.
 *
 * Return: Length of s.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * check_digits - Verifies a string is non-empty and contains only digits.
 * @s: String to validate.
 *
 * Return: 1 if valid digits, 0 otherwise.
 */
int check_digits(char *s)
{
	int i = 0;

	if (s == NULL || s[0] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * multiply_digits - Multiplies two digit strings into a digit array.
 * @n1: First numeric string.
 * @n2: Second numeric string.
 * @res: Output array of size len1 + len2.
 */
void multiply_digits(char *n1, char *n2, int *res)
{
	int len1 = _strlen(n1);
	int len2 = _strlen(n2);
	int i, j, prod, sum;

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			prod = (n1[i] - '0') * (n2[j] - '0');
			sum = prod + res[i + j + 1];
			res[i + j + 1] = sum % 10;
			res[i + j] += sum / 10;
		}
	}
}

/**
 * print_result - Prints non-leading digits of res followed by newline.
 * @res: Array containing product digits.
 * @total_len: Total length of res.
 */
void print_result(int *res, int total_len)
{
	int i, started = 0;

	for (i = 0; i < total_len; i++)
	{
		if (res[i] != 0 || started || i == total_len - 1)
		{
			started = 1;
			_putchar(res[i] + '0');
		}
	}
	_putchar('\n');
}

/**
 * main - Multiplies two positive numbers passed as arguments.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, exits with 98 on invalid input or failure.
 */
int main(int argc, char *argv[])
{
	int *res;
	int total_len, i = 0;

	if (argc != 3 || !check_digits(argv[1]) || !check_digits(argv[2]))
		print_error(NULL);

	total_len = _strlen(argv[1]) + _strlen(argv[2]);
	res = malloc(sizeof(int) * total_len);
	if (res == NULL)
		print_error(NULL);

	while (i < total_len)
	{
		res[i] = 0;
		i++;
	}

	multiply_digits(argv[1], argv[2], res);
	print_result(res, total_len);
	free(res);
	return (0);
}
