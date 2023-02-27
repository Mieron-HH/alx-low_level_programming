#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n
 * elements of an array of integers, followed
 * by a new line
 * @a: a string input
 * @n: a number input
 * Return: always 0 (success)
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
