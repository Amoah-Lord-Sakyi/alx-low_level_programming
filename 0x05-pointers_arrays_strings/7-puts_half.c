#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: an input string
*/
void puts_half(char *str)
{
int bob = 0, a, n;

while (str[bob] != '\0')
bob++;

if (bob % 2 == 0)
n = bob / 2;

else
n = (bob + 1) / 2;

for (a = n; a < bob; a++)
_putchar(str[a]);

_putchar('\n');
}
