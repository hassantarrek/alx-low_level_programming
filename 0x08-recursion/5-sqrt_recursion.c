#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * @x: square root
 * Return: the natural square root of a number
 */
int squuare(int n, int x);
int _sqrt_recursion(int n)
{
	return (squuare(n, 1));
}

/**
 * squuare - to get square root
 * @n: integer to find square root
 * @x: square root
 * Return: the natural square root of a number
 */
int squuare(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x < n)
	{
		return (squuare(n, x + 1));
	}
	else
	{
		return (-1);
	}
}
