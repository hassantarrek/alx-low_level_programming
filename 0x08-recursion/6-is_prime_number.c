#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: integer
 * @x: other int
 * Return: already done
 */
int chk_prime(int n, int x);
int is_prime_number(int n)
{
	return (chk_prime(n, 2));
}

/**
 * chk_prime - to check to numbers
 * @n: int one
 * @x: int two
 * Return: what you want
 */
int chk_prime(int n, int x)
{
	if (x >= n && n > 1)
	{
		return (1);
	}
	else if (n % x == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (chk_prime(n, x + 1));
	}
}

