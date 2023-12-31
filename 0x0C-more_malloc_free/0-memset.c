#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: int 1
 * @b: int 2
 * @n: int 3
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int *ptr;

	while (n--)
	{
		*s++ = b;
	}
	return (ptr);
}
