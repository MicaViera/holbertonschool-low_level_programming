#include "dog.h"
/**
 * init_dog - Is a function that initialize a variable of type struct dog.
 * @d: a pointer.
 * @name: variable with the name of the dog.
 * @age: variable with the age of the dog.
 * @owner: variable with the name of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
