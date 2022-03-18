#include "main.h"
/**
* _isupper - A function that checks for uppercase character.
* @c: An input character
* Return: 1 if c is uppercase or 0 otherwi
*/
int _isupper(int c)
{
	int number, r;

	r = 0;

	number = 48;

for (; number <= 57; ++number)
{
if (c == number)
{
	r = 1;
	break;
}
}
	return (r);
}
