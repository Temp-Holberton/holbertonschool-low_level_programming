#include "main.h"
#include <stdlib.h>

/**
 * count_words - Helper function to count the number of words in a string.
 * @str: The string to evaluate.
 *
 * Return: Number of words.
 */
int count_words(char *str)
{
	int i, words, in_word;

	i = 0;
	words = 0;
	in_word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				in_word = 1;
				words++;
			}
		}
		else
		{
			in_word = 0;
		}
		i++;
	}
	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: Pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	char **tab;
	int i, j, k, len, words, w;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	tab = malloc(sizeof(char *) * (words + 1));
	if (tab == NULL)
		return (NULL);

	i = 0;
	w = 0;
	while (str[i] != '\0' && w < words)
	{
		if (str[i] != ' ')
		{
			len = 0;
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
			{
				len++;
				j++;
			}
			tab[w] = malloc(sizeof(char) * (len + 1));
			if (tab[w] == NULL)
			{
				while (w > 0)
				{
					w--;
					free(tab[w]);
				}
				free(tab);
				return (NULL);
			}
			k = 0;
			while (k < len)
			{
				tab[w][k] = str[i];
				k++;
				i++;
			}
			tab[w][k] = '\0';
			w++;
		}
		else
		{
			i++;
		}
	}
	tab[w] = NULL;
	return (tab);
}
