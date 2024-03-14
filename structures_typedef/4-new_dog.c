#include "dog.h"
#include <stdlib.h>

char _strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_length = 0;
	int owner_length = 0;

	for (name_length = 0; name[name_length]; name_length++)
		;

	for (owner_length = 0; owner[owner_length]; owner_length++)
		;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(name_length + 1);

	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(owner_length + 1);

	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
