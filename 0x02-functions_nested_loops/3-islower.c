#include <stdio.h>
/**
*_islower - entry point
*
*Returns: returns 0 or 1
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else if (c >= 65 && c <= 90)
return (0);
}
