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
char alph = 'a';
int num = 0;
while (num < 26)
{
if (alph != 'q' && alph != 'e')
putchar(alph);
alph++;
num++;
}
putchar('\n');
return (0);
}
