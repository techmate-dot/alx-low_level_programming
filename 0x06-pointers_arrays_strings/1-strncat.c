#include "main.h"
/**
*_strncpy - A function that concatenates two strings.
*Return: This returns the consatenates string
*@dest: first arguement
*@src: second arguement
*@n: third arguement
*/
char *_strncat(char *dest, char *src, int n)
{
int i, f;
f = 0;
i = 0;
do {
i++;
} while (dest[i] != '\0');

while (f < n)
{
dest[i] = src[f];
f++;
i++;
}
return (dest);
}
