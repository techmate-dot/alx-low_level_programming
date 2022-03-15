#include "main.h"
/**
*main - all programs run from witin this function
*
*Return: return 0 if the program is good _putchar
*/
int main(void)
{
int size = 8;
int name[size];
name[0] = '_';
name[1] = 'p';
name[2] = 'u';
name[3] = 't';
name[4] = 'c';
name[5] = 'h';
name[6] = 'a';
name[7] = 'r';
for (int i = 0; i < 8; i++)
{
_putchar(name[i]);
}
_putchar('\n');
return (0);
}
