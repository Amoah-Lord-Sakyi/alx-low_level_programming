#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: an input character
 * Return:  the length of a string.
*/

int _strlen(char *s)
{
int bob = 0;

while (s[bob] != '\0')
bob++;

return (bob);
}
