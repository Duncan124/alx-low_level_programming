#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: pointer to 1st char occurance
 * @c: char to locate
 *
 * Return: &s, 0 (success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}
