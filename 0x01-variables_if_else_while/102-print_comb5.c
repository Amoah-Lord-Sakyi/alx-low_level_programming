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
for (x =  0; x <=  98; x++)
{
for (c =  x + 1; c <=  99; c++)
{
if (c != x)
{
putchar((x / 10) + '0');
putchar((x % 10) + '0');
putchar(' ');
putchar((c / 10) + '0');
 putchar((c % 10) + '0');
if (x == 98 && c == 99)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
