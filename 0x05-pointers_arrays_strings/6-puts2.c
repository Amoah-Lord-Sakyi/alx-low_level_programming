#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: an input string
*/
void puts2(char *str)
{
int bob = 0, a = 0;

while (str[bob] != '\0')
bob++;
bob -= 1;

for (; a <= bob; a += 2)
_putchar(str[a]);

_putchar('\n');
}
