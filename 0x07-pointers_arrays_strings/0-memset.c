#include "main.h"

/**
 * _memset - copies memory area
 * @s: memory area pointer
 * @b: constant byte
 * @n: number of bytes to fill
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
