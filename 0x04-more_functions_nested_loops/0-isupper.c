#include "main.h"
/**
*_isupper - ches if letter is upper or lowercase
*@c: argument that canbe parsed
*Return: return the checks
*/
int _isupper(int c)
{
int r;
r = 0;
if (c >= 41 && c <= 90)
{
	r = 1;
}
else
{
	r = 0;
}
return (r);
}
