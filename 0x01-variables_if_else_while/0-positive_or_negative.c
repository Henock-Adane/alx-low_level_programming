#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints the sign of the random number,
*
* Description: The main function included a random number
* and if statments to print n's sign
*
* Return: 0 always
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/*My code*/
if (n < 0)
{
printf("%i is negative\n", n)
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
if (n > 0)
{
printf("%i is positive\n", n);
}
return (0);
}
