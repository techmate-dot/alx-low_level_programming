#include <stdio.h>
/**
*main - main extry poin of the program
*Return: returns the value 0 always
*/
int main(void)
{
int fizz;
char *f = "Fizz";
char *b = "Buzz";
for (fizz = 1; fizz <= 100; fizz++)
{
if (fizz % 3 == 0 && fizz % 5 == 0)
{
printf("%s%s", f, b);
putchar(' ');
}
else if (fizz % 5 == 0)
{
printf("%s", b);
putchar(' ');
}
else if (fizz % 3 == 0)
{
printf("%s", f);
putchar(' ');
}
else
{
printf("%i", fizz);
putchar(' ');
}
}
putchar('\n');
return (0);
}
