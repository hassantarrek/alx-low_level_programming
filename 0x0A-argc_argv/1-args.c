#include <stdio.h>

/**
 * main - entry point
 * @argc: int 1
 * @argv: int 2
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
