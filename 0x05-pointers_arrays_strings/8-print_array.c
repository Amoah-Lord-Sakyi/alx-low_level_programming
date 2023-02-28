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
int i = 0;

while (i < n)
i++;
{
printf("%d", a[n]);
if (i < n -1)
printf(", ");
}
printf("\n");
}
