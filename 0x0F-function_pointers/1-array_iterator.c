#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array
 * @array: the array
 * @size: size
 * @action: action
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int x;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
