#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * @b: string
 * Return:converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int decVal = 0;

	if (!b)
	{
		return (0);
	}
	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
		{
			return (0);
		}
		decVal = 2 * decVal + (b[x] - '0');
	}

	return (decVal);
}
