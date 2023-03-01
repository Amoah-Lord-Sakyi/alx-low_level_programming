#include "main.h"
/**
 * print_rev - prints a string, in reverse,
 * followed by a new line.
 * @s: an input string
*/
void print_rev(char *s)
{
int bob = 0;
int o;

while (*s != '\0')
{
bob++;
s++;
}
s--;
for (o = bob; o > 0; o--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
