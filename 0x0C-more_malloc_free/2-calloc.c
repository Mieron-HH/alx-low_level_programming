#include "main.h"
void _memset(char *s, char c, unsigned int size);
/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: an unsigned integer input
 * @size: an unsigned integer input
 * Return: a pointer to a memory, or NULL otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
/**
 * _memset - a function that intializes an array to 0
 * @s: a string input
 * @c: a character input
 * @size: an unsigned integer input
 * Return: always 0 (success)
 */
void _memset(char *s, char c, unsigned int size)
{
	unsigned int i = 0;

	while (i < size)
		s[i++] = c;
}
