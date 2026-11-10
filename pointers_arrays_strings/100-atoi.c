#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to convert.
 *
 * Return: The converted integer, or 0 if no numbers exist.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int found_digit = 0;
	int digit;
	unsigned int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			digit = s[i] - '0';
			result = result * 10 + digit;
		}
		else if (found_digit)
		{
			break;
		}
		i++;
	}

	if (!found_digit)
	{
		return (0);
	}

	if (sign < 0)
	{
		return (-result);
	}

	return (result);
}
