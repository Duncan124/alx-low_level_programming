#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all numbers
 * @n: count of all parameter arguments
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;

	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}

	va_end(numbers);

	return (sum);
}
