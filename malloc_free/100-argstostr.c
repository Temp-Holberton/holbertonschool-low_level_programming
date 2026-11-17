#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The argument count.
 * @av: The argument vector (array of strings).
 *
 * Return: Pointer to a new string, or NULL if it fails,
 *         ac == 0, or av == NULL.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++; /* For the newline character */
		i++;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	str[k] = '\0';

	return (str);
}
