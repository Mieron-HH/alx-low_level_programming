#include "main.h"
/**
 * _realloc - a function that reallocates a memory block
 * using malloc and free
 * @ptr: a pointer
 * @old_size: an unsigned integer input
 * @new_size: an unsigned integer input
 * Return: a pointer to an allocated memory, or NULL otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int i = 0;
	unsigned int j = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	new = (char *) malloc(new_size);
	if (!new)
	{
		free(ptr);
		return (NULL);
	}
	while (new_size <= old_size && i < new_size)
		new[i++] = ((char *) ptr)[j++];
	while (new_size > old_size && i < old_size)
		new[i++] = ((char *) ptr)[j++];
	free(ptr);
	return (new);
}
