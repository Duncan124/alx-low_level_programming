#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string pointer
 *
 * Return: s
 */

char *leet(char *s)
{
	int k = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + k) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + k) == low_letters[i] || *(s + k) == upp_letters[i])
			{
				*(s + k) = numbers[i];
				break;
			}
		}
		k++;
	}

	return (s);
}
