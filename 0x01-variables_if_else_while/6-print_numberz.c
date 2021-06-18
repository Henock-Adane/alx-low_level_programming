#include <stdio.h>
/**
* main - prints single digit numbers of base 10
*
*Description: the main functions is used to display
*single digit numbers of base 10
*Return: 0
*/
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
