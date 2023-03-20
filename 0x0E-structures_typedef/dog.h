#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new data type that describes a dog
 * @name: a string
 * @age: a float
 * @owner: a string
 * Description: describes a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif
