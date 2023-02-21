#include "main.h"
/**
 * _islower -  checks for lowercase character.
 *@c: An input character.
 * Return: 1 if its lowercase or 0 its uppercase
*/
int _islower(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
return (1);
else
return (0);
}
