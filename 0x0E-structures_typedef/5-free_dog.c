#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - features of free dog
 * @d: data struct for free dog
 *
 * Return: 0 (free snoop dog)
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->owner);
	free(d->name);
	free(d);
	}
}
