#include "main.h"
/**
*main - entry point
*
*Return: returns the alphabets
*/
void print_alphabet(void)
{
int i;
char letter = 'a';
for (i = 0; i < 26; i++)
{
_putchar(letter + i);
}
_putchar('\n');
}
