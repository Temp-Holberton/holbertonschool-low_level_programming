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
	int i = 0, words = 0, in_word = 0;

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
 * free_tab - Frees a 2D array of strings upon allocation failure.
 * @tab: The array to free.
 * @size: Number of elements to free.
 */
void free_tab(char **tab, int size)
{
	while (size > 0)
	{
		size--;
		free(tab[size]);
	}
	free(tab);
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
	int i = 0, w = 0, words, len, j, k;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	tab = malloc(sizeof(char *) * (words + 1));
	if (tab == NULL)
		return (NULL);
	while (str[i] != '\0' && w < words)
	{
		if (str[i] != ' ')
		{
			len = 0, j = i;
			while (str[j] != ' ' && str[j] != '\0')
				len++, j++;
			tab[w] = malloc(sizeof(char) * (len + 1));
			if (tab[w] == NULL)
			{
				free_tab(tab, w);
				return (NULL);
			}
			for (k = 0; k < len; k++, i++)
				tab[w][k] = str[i];
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
