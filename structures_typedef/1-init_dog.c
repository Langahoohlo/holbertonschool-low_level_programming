#include "dog.h"
#include <stdio.h>

/**
 * init_dog - ....
 * @d: ....
 * @name: ....
 * @age: ....
 * @owner: ....
 * Return: id d is empty
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
