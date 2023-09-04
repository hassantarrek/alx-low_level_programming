#include "main.h"
/**
 * main - Main function for the task
 * @argc: number of arguments
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int from, to, x, y;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	x = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		y = write(to, buff, x);
		if (to == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		x = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (x > 0);
	free(buff);
	close_file(from);
	close_file(to);
	return (0);
}
