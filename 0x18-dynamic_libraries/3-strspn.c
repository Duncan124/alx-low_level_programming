#include "main.h"

/**
 * _strspn - gets lenght of prefix substring
 * @s: pointer to a string
 * @accept: pointer to substring
 *
 * Return: n (number of bytes)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
