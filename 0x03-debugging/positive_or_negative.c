#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main -this is the main entry point
*
*Return: 0 if code is successful
*/
void positive_or_negative(int n)
{
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
}
