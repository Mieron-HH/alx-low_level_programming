#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - a new data type that describes a dog
 * @name: a string
 * @age: a float
 * @owner: a string
 * Description: describes a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct do
 */
typedef struct dog dog_t;

void		init_dog(struct dog *d, char *name, float age, char *owner);
void		print_dog(struct dog *d);

#endif
