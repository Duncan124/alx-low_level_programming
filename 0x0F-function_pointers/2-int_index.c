#include "function_pointers.h"

/**
 * int_index - finds an integer in an array
 * @array: array of integers
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: return (index) (if cmp !return (0)),
 * return (-1) (for size <= 0 || otherwise)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp && size && array)
		for (i = 0; i <= size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
