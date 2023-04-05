#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *  and returns the head node’s data (n).
 *  @head: a double pointer to listint_t
 *  Return: 0 if empty
*/

int pop_listint(listint_t **head)
{
listint_t *temp;
int s;

if (head == NULL || *head == NULL)
return (0);

temp = *head;
s = temp->n;
*head = temp->next;
free(temp);

return (s);
}
