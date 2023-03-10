#include "main.h"
/**
 * *_strncat - concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input string
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int srclen = 0, i = 0;
char *bob = dest, *bob2 = src;

while (*src)
{
srclen++;
src++;
}

while (*dest)
dest++;

if (n > srclen)
n = srclen;

src = bob2;

for (; i < n; i++)
*dest++ = *src++;

*dest = '\0';

return (bob);
}
