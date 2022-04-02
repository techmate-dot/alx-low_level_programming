#include <stdio.h>
#include <stdlib.h>
/**
*main - prints all arguments it receives.
*@c: counter
*@v: vector
*Return: returns all arguements
*/

int main(int c, char *v[])
{
unsigned int count = 0;
int n = 1;

if (c <= 1)
{
printf("%i\n", 0);
}
while (n < c)
{
count += atoi(v[n]);
if (atoi(v[n]) == 0)
{
printf("Error\n");
return (1);
break;
}
n++;
}
if (atoi(v[n - 1]) != 0)
{
printf("%i\n", count);
}
return (0);
}
