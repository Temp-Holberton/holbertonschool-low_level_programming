#include <stdlib.h>
#include "dog.h"

/**
 * _str_len - Computes the length of a string.
 * @s: Non-NULL string to measure.
 *
 * Return: Number of characters before null terminator.
 */
static unsigned int _str_len(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _str_dup - Allocates and copies a string onto the heap.
 * @s: Non-NULL source string.
 *
 * Return: Pointer to newly allocated copy, or NULL on failure.
 */
static char *_str_dup(char *s)
{
	char *copy;
	unsigned int len, i;

	len = _str_len(s);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = s[i];

	return (copy);
}

/**
 * new_dog - Creates a new dog_t with copied name and owner strings.
 * @name: Name of the dog.
 * @age: Age of the dog in years.
 * @owner: Name of the dog's owner.
 *
 * Return: Pointer to newly allocated dog_t, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy, *owner_copy;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	name_copy = _str_dup(name);
	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}

	owner_copy = _str_dup(owner);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}

	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;

	return (dog);
}
