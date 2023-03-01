#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints n elements of an array of integers,
 * followed by a new line.
 * @a: an integer input
 * @n: an integer input
*/
void print_array(int *a, int n)
{
if (a)
{
int i = 0;

while (i < n)
{
printf("%d", a[i]);
if (i <= (n - 1))
{
printf(",");
printf(" ");
}
i++;
}
}
printf("\n");
}
