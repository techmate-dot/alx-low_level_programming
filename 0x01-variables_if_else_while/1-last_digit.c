#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - entry point
*
*Return: 0
*/
int main(void)
{
int n;
int s = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (s > 5)
{
printf("Last digit of %d is %s and is greater than 5", n, s);
else if (s == 0)
{
printf("Last digit of %d is %s and is 0", n, s);
else if (s < 6 && s != 0)
{
printf("Last digit of %d is %s and is greater than 5", n, s);
}
return (0);
}
