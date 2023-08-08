#include "main.h"

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 * @size: size of the integer
 * @c: a character to be checked
 * Return: null or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		x[size] = c;
	}
	return (x);
}
