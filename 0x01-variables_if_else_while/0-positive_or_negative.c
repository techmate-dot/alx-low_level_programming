#include <stdlib.h>
#include <time.h>
/**
*main -this is the main entry point
*
*Return: 0 if code is successful
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else if (n < 0)
{
printf("is negative\n");
}
return (0);
}