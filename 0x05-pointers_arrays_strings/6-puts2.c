#include "main.h"
/**
*puts2 - A unction that prints every other character of a string,
*starting with the first character, followed by a new line.
*@str: Arguement
*/
void puts2(char *str)
{
int i = 0;
for (; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
