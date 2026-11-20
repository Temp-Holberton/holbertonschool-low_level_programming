#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog_t structure and its allocated strings.
 * @d: Pointer to dog_t structure to free.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
