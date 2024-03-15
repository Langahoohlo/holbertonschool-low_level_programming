#include "dog.h"
#include "main.h"
#include <stdlib.h>

/**
 * _strcpy - ....
 * @dest: ....
 * @src: ....
 */

void _strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
}

/**
 * new_dog - ....
 * @name: ....
 * @age: .....
 * @owner: .....
 * Return: ....
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_length = 0;
	int owner_length = 0;

	for (name_length = 0; name[name_length]; name_length++)
		;

	for (owner_length = 0; owner[owner_length]; owner_length++)
		;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(name_length + 1);

	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(owner_length + 1);

	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
