#include <stdio.h>
/**
* main - prints lowercase alphabets in reverse
*
*Description: main will display alphabets in reverse
*Return: 0 always
*/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
