#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters of a  string
 * to upper case
 * @a: an input string
 * Return: char pointer to converted string
 */
char *string_toupper(char *a)
{
char *bob = a;

while (*a)
{
if (*a >= 'a' && *a <= 'z')
*a -= 32;
a++;
}
return (bob);
}
