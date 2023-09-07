#include "main.h"

/**
 * flip_bits - returns the number of bits
 * you would need to flip to get from one number to another
 * @n: number
 * @m: 2nd number
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = 63, count = 0;
	unsigned long int cur, exc = n ^ m;

	while (x >= 0)
	{
		cur = exc >> x;
		if (cur & 1)
		{
			count++;
		}
		x--;
	}
	return (count);
}
