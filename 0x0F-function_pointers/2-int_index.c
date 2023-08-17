#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: an array for elemnts
 * @size: size of the array
 * @cmp: the compare function
 * Return: integer index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
		{
			return (x);
		}
	}
	return (-1);
}
