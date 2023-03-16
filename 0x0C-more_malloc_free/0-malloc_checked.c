#include "main.h"
/**
 * malloc_checked - a funcion that allocates memory using malloc
 * @b: an unsigned integer input
 * Return: a pointer to the allocated memory, or NULL otherwise
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}
