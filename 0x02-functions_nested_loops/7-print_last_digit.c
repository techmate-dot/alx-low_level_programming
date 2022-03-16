#include <stdio.h>
#include "main.h"
/**
*print_last_digit - returns the last digit of an int
*Decription: return last digit of a number
*@n: arguement
*Return: last digit
*/
int print_last_digit(int n)
{
int t;
if (n >= 0)
{
t = (n % 10);
}
else
{
t = (n * -1) % 10;
}
return (t);
}
