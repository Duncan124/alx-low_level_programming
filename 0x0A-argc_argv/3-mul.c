#include "main.h"

/**
 * main - multiplies argv[1] and argv[2]
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success), 1 (if argc < 4)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	else
	{
		puts("Error");
		return (1);
	}

	return (0);
}
