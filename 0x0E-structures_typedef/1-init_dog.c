#include "dog.h"

/**
 * init_dog - initializes a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		g->owner = owner;
	}
}
