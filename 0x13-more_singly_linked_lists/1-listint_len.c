#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the lisintt_t list
 * Return: number of elements in h
*/

size_t listint_len(const listint_t *h)
{
size_t s = 0;

while (h)
{
s++;
h = h->next;
}
return (s);
}

