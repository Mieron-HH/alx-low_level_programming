#include "dog.h"
/**
 * print_dog - a function that prints a struct dog
 * @d: a struct of type dog
 * Return: always 0 (success)
 */
void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d)
	{
		d->name = d->name != NULL ? d->name : nil;
		d->owner = d->owner != NULL ? d->owner : nil;
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
