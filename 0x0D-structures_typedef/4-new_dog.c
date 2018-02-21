#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: a pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == 0)
		return (NULL);
	p->name = malloc(strlen(name) * sizeof(char));
	if ((p->name) == 0)
	{
		free(p);
		return (NULL);
	}
	p->owner = malloc(strlen(owner) * sizeof(char));
	if ((p->owner) == 0)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	p->name = strcpy(p->name, name);
	p->age = age;
	p->owner = strcpy(p->owner, owner);
	return (p);
}
