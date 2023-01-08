#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: 1st string pointer
 * @s2: 2nd string pointer
 *
 * Return: 0 (equal), +val (greater), -val(less)
 */

int _strcmp(char *s1, char *s2)
{
	int i, val;

	i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	val = s1[i] - s2[i];

	return (val);
}
