#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: first int
 * @y: second int
 * Return: the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	long double z;

	if (y < 0)
	{
		return (0);
	}
	while (y != 0)
	{
		z *= x;
		--y;
	}
	return (z);
}
