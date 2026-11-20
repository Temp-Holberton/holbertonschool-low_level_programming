#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog's basic attributes.
 * @name: Name of the dog.
 * @age: Age of the dog in years.
 * @owner: Name of the dog's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
