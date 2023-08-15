#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - dog features printing
 * @d: data struct of the dog
 *
 * Return: 0 (snoop dog)
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", (d->name) ? d->name : "()");
	printf("Age: %f\n", (d->age) ? d->age : 0);
	printf("Owner: %s\n", (d->owner) ? d->owner : "()");
	}
}
