#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * *new_dog - Is a funtion that creates a new dog.
 * @name: Variable with the name of the dog.
 * @age: Variable with the age of the dog.
 * @owner: Variable with the name of the owner.
 * Return: a pointer with a copy of variables name and owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlength;
	int olength;
	int box;
	dog_t *p;

	nlength = strlen(name) + 1;
	olength = strlen(owner) + 1;

	p = malloc(sizeof(dog_t));
	if (!p)
		return (NULL);

	p->name = malloc(nlength * sizeof(char));
	if (!p->name)
	{
		free(p);
		return (NULL);
	}

	for (box = 0; box < nlength; box++)
		p->name[box] = name[box];

	p->age = age;

	p->owner = malloc(olength * sizeof(char));

	if (!p->owner)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	for (box = 0; box < olength; box++)
		p->owner[box] = owner[box];

	return (p);
}
