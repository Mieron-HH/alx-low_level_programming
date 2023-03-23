#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers, followed by
 * a new line
 * @separator: a string input
 * @n: an unsigned number input
 * Return: always 0 (success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (separator && i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
}
