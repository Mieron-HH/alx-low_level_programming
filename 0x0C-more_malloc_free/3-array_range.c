#include "main.h"
/**
 * array_range - a function that creates an arary of integers
 * @min: a number input
 * @max: a number input
 * Return: an array of integers that contains a range of integers
 * between min and max
 */
int *array_range(int min, int max)
{
	int *range;
	int i = 0;

	if (min > max)
		return (NULL);
	range = (int *) malloc((max - min + 1) * sizeof(int));
	if (!range)
		return (NULL);
	while (min <= max)
		range[i++] = min++;
	return (range);
}
