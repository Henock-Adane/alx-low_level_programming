#include <stdio.h>

/**
* main - print the size of various types
* Description: the printf function is used to print size of types
* Return: 0
*/
int main(void)
{
char h;
int e;
long n;
long long o;
float k;
printf("Size of a char: %ld byte(s)\n", sizeof(h));
printf("Size of an int: %ld byte(s)\n", sizeof(e));
printf("Size of a long int: %ld byte(s)\n", sizeof(n));
printf("Size of a long long int: %ld byte(s)\n", sizeof(o));
printf("Size of a float: %ld byte(s)\n", sizeof(k));
return (0);
}
