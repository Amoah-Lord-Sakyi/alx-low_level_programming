#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: an input integer
 * @b: an input integer
*/
void swap_int(int *a, int *b)
{
int bob;

bob = *a;
*a = *b;
*b = bob;
}
