#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: int
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *x = malloc(b);

	while (x == 0)
	{
		exit(98);
	}
	return (x);
}
