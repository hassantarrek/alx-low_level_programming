#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, x;
	char *hsn;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	hsn = (char *)main;

	for (x = 0; x < bytes; x++)
	{
		if (x == bytes - 1)
		{
			printf("%02hhx\n", hsn[x]);
			break;
		}
		printf("%02hhx ", hsn[x]);
	}
	return (0);
}
