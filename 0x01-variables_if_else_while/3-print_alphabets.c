#include <stdio.h>
/**
* main - prints alphabets
*
* Description: the main function is used to display
* upper and lower case alphabets
* Return: 0 always
*/
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
