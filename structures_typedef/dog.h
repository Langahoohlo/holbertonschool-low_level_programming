#ifndef _DOG_H
#define _DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - about dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * d_t - typedef for struct
 * init_dog - ....
 * print_dog - ....
 * @d: ....
 * @name: ....
 * @age: ....
 * @owner: ....
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
dog_t *new_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
