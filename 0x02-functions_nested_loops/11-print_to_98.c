#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: An input integer
*/
void print_to_98(int n)
{
  
{
while(n > 98)
_putchar(n);
_putchar(',');
_putchar(' ');
_putchar('\n');
}
else
{
while(n < 98)
_putchar(n++);
_putchar(n);
_putchar(',');
_putchar(' ');
_putchar('\n');
}
}
