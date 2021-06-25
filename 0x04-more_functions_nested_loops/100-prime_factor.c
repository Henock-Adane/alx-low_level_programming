#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 on Success
 */

int main(void)
{
	unsigned long i, p = 0, acu = 1, n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			acu = acu * i;

			if (i > p)
				p = i;

			if (acu == n)
			{
				n = i;
			}
		}
	}

	printf("%lu\n", p);
	return (0);
}
