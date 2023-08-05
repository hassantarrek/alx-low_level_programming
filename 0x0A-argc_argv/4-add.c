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
	int x = 0;
	char *y;

	while (--argc)
	{
		for (y = argv[argc]; *y; y++)
		{
			if (*y < '0' || *y > '9')
			{
				return (printf("Error\n"), 1);
			}
		}
		x += atoi(argv[argc]);
	}
	printf("%d\n", x);
	return (0);
}
