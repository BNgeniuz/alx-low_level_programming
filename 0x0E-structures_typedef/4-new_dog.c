#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - features of new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: 0 (snoop dog)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bull_dog;
	int name_x = 0, own_x = 0;

	if (name != NULL && owner != NULL)
	{
	name_x = _strlen(name) + 1;
	own_x = _strlen(owner) + 1;
	bull_dog = malloc(sizeof(dog_t));

	if (bull_dog == NULL)
	return (NULL);

	bull_dog->name = malloc(sizeof(char) * name_x);

	if (bull_dog->name == NULL)
	{
	free(bull_dog);
	return (NULL);
	}

	bull_dog->owner = malloc(sizeof(char) * own_x);

	if (bull_dog->owner == NULL)
	{
	free(bull_dog->name);
	free(bull_dog);
	return (NULL);
	}

	bull_dog->name = _strcpy(bull_dog->name, name);
	bull_dog->owner = _strcpy(bull_dog->owner, owner);
	bull_dog->age = age;
	}

	return (bull_dog);
}

/**
 * _strlen - str length
 * @s: set str to count
 *
 * Return: 0 (String length)
 */

int _strlen(char *s)
{
	int y = 0;

	for (; *s != '\0'; s++)
	{
	y++;
	}

	return (y);
}

/**
 * _strcpy - Cpy str
 * @dest: str destination
 * @src: Str src
 * Return: 0 (str cpying)
 */

char *_strcpy(char *dest, char *src)
{
	int z;

	for (z = 0; src[z] != '\0'; z++)
	{
	dest[z] = src[z];
	}

	dest[z++] = '\0';

	return (dest);
}
