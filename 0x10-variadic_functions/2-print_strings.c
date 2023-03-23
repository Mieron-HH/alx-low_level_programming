#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings, followed by
 * a new line
 * @separator: a string input
 * @n: an unsigned number input
 * Return: always 0 (success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char *);
			if (str)
				printf("%s", str);
			else
				printf("(nil)");
			if (separator && i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
}
