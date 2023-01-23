#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: separates numbers
 * @n: number of arguments passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));

		/* prints the separator before the next number */
		if (separator && (i < n - 1))
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(numbers);
}
