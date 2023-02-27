#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: an input string
*/
void rev_string(char *s)
{
int bob = 0, a = 0;
char bob2;

while (s[bob] != '\0')
bob++;

while (a < bob--)
{
bob2 = s[a];
s[a++] = s[bob];
s[bob] = bob2;
}
}
