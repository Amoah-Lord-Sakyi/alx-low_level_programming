#include "main.h"
/**
 * _isupper -  checks for alphabetic character.
 * @c: An input character.
 * Return: 1 if its uppercase or 0 otherwise.
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
