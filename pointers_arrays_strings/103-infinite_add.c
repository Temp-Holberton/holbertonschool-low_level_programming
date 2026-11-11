#include "main.h"

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: First number string.
 * @n2: Second number string.
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer.
 *
 * Return: A pointer to the result, or 0 if it cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, sum, carry = 0;
	int len1 = 0, len2 = 0, max_len;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	max_len = len1 > len2 ? len1 : len2;
	if (max_len + 2 > size_r)
		return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 1;
	r[k] = '\0';
	k--;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		sum = carry;
		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}
		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}
		if (k < 0)
			return (0);
		r[k] = (sum % 10) + '0';
		carry = sum / 10;
		k--;
	}

	return (r + k + 1);
}
