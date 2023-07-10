#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Is a function that prints a struct dog.
 * @d: is a pointer.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (!d->age)
			printf("Age: 0.000000\n");
		else
			printf("Age: %f\n", d->age);
		if (!d->owner)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
