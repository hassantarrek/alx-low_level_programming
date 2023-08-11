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
	char *ptr = s;

	while (n--)
	{
		*s++ = b;
	}
	return (ptr);
}
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: int 1
 * @size: a size
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	x = malloc(nmemb * sizeof(int));
	if (x == 0)
	{
		return (NULL);
	}
	_memset(x, 0, nmemb * sizeof(int));
	return (x);
}
