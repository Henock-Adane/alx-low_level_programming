#include <stdio.h>
/**
*main - prints combination of two digits
*Description: the main function is used to print digits combination
*Return: 0
*/
int main(void)
{
	int ch = 0;
	int ln, rn;

	while (ch <= 99)
	{
		ln = (ch / 10 + '0');
		rn = (ch % 10 + '0');

		if (ln < rn)
		{
			putchar(ln);
			putchar(rn);

			if (ch != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
