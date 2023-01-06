#include "main.h"

/**
 * reverse_array - reverses array content
 * @a: array pointer
 * @n: no. of array elements
 */

void reverse_array(int *a, int n)
{
	int x, i;

	n = n - 1;
	i = 0;

	while (i <= n)
	{
		x = a[i];
		a[i++] = a[n];
		a[n--] = x;
	}
}
