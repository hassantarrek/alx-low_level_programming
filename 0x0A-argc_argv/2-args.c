#include <stdio.h>
/**
 * main - entry point
 * @argc: int 1
 * @argv: int 2
 * Return: 0
 */
int main(int argc, char **argv)
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
