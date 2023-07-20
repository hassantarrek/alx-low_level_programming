#include <stdio.h>

/**
 * main - alx 0x03 debugging task 14
 *
 * Return: void
 */
int main(void)
{
	int hsn;
	unsigned long x = 0, y = 1, z;

	for (hsn = 0; hsn < 50; hsn++)
	{
		z = x + y;
		printf("%lu", z);

		x = y;
		y = z;

		if (hsn == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

