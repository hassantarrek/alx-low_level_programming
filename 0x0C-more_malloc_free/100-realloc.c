#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: a size
 * @new_size: new size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrx;
	char *oldPtr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptrx = malloc(new_size);
	if (!ptrx)
		return (NULL);

	oldPtr = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			ptrx[x] = oldPtr[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			ptrx[x] = oldPtr[x];
	}

	free(ptr);
	return (ptrx);
}

