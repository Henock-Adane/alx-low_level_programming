#include <stdio.h>
/**
* main - print base 16 num
*Description: main print base 16 num
*Return: 0 always
*/
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
