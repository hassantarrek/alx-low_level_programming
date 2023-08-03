#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: first int
 * @y: second int
 * Return: the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return 1;
	}
}
