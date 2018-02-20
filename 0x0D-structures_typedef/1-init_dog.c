#include "dog.h"
#include <stdio.h>


/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer
 * @name: first parameter
 * @age: second
 * @owner: third
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
