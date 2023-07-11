#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - Is a function that free the dogs.
 *  @d: Is a pointer.
 */
void free_dog(dog_t *d)
{
		free(d->name);
		free(d->owner);
		free(d);
}
