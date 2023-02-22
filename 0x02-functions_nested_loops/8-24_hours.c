#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
*/
void jack_bauer(void)
{
int c, w;
for (c = 0; c <= 23; c++)
{
for (w = 0; w <= 59; w++)
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
_putchar(':');
_putchar((w / 10) + '0');
_putchar((w % 10) + '0');
_putchar('\n');
}
}
}
