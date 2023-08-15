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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
