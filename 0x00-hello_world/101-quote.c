#include <stdio.h>
#include <unistd.h>
/**
*main - prints with out printf and put
*Description: write function is used for display
*Return: 1
*/
int main(void)
{
int h = 1;
write(h, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
