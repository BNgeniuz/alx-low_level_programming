#ifndef dog_header
#define dog_header

/**
 * struct dog - dog features
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: 0 (snoop dog)
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
