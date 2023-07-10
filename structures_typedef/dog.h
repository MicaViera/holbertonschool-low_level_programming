#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - Is a structure with variables.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
