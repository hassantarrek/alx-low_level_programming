#include "main.h"

/**
 * alloc_grid - nested loop to make grid
 * @width: width
 * @height: height :)
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **hsn;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	hsn = malloc(sizeof(int *) * height);

	if (hsn == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		hsn[x] = malloc(sizeof(int) * width);

		if (hsn[x] == NULL)
		{
			for (; x >= 0; x--)
				free(hsn[x]);

			free(hsn);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			hsn[x][y] = 0;
	}

	return (hsn);
}

