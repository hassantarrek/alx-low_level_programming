#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: int 1
 * @argv: int 2
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int x;

	if (argc == 3)
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", x);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
