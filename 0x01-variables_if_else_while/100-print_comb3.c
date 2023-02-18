#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int x, c;
for (x =  '0'; x <  '9'; x++)
{
for (c =  x + 1; c <=  '9'; c++)
{
if (c !=  x)
{
putchar(x);
putchar(c);
if (x ==  '8' && c ==  '9')
continue;
putchar(',');
putchar(' ');
}
}
}
return (0);
}
