#include "main.h"
/**
*print_numbers - print number from (0-9)
*/
void print_numbers(void)
{
int num = 48;

for (; num <= 57; ++num)
{
if (num != 50 && num != 52)
{
	_putchar(num);
}
}
	_putchar('\n');
}
