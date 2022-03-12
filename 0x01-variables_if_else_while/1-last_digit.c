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
srand(time(0));
n = rand() - RAND_MAX / 2;
int s = n % 10;
if (s > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, s);
}
else if (s == 0)
{
printf("Last digit of %d is %d and is 0", n, s);
}
else if (s < 6 && s != 0)
{
printf("Last digit of %d is %d and is greater than 5", n, s);
}
return (0);
}
