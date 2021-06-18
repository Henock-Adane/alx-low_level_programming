#include <stdio.h>
/**
* main - print alphabets
*
* Description: the main functions is used to display a-z alphabets
* Return: 0 always
*/

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
