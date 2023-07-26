#include "main.h"
/**
 * swap_int -  swaps integers
 * @a: integer 1
 * @b: integer 2
 * Return: value
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
