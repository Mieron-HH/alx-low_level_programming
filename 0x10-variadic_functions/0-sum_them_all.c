#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum
 * of all its parameters
 * @n: an unsigned number input
 * Return: the sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
