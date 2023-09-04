#include "main.h"

/**
 * close_file - Closes file descriptors
 * @hs: The file descriptor to be closed
 * Return: void
 */

void close_file(int hs)
{
	int x;

	x = close(hs);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", hs);
		exit(100);
	}
}
