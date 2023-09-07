#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: as it says
 * Return: value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitVal;

	if (index > 63)
	{
		return (-1);
	}

	bitVal = (n >> index) & 1;

	return (bitVal);
}
