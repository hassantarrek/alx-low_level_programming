#include <stdio.h>
/**
 * main - Entry ppooooiiinnttt
 *
 * Description: im tired, im so tired
 *
 * Return: 0 like every task without prototype
 */
int main(void)
{
	long int n, tired;

	n = 612852475143;
	for (tired = 2; tired <= n; tired++)
	{
		if (n % tired == 0)
		{
			n /= tired;
			tired--;
		}

	}
	printf("%ld\n", tired);
	return (0);

}
