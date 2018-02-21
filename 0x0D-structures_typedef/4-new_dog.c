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
	int a, b, c;

	for (a = 0; name[a]; a++)
		;
	for (b = 0; owner[b]; b++)
		;
	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->name = malloc((a + 1) * sizeof(char));
	if ((p->name) == NULL)
	{
		free(p);
		return (NULL);
	}
	p->owner = malloc((b + 1) * sizeof(char));
	if ((p->owner) == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	for (c = 0; c <= a; c++)
		p->name[c] = name[c];
	p->age = age;
	for (c = 0; c <= b; c++)
	p->owner[c] = owner[c];
	return (p);
}
