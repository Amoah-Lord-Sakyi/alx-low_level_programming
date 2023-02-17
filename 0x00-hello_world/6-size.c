#include <stdio.h>
/**
* main - Entry point
*
* Return: Always o (Sucess)
*/
int main(void)
{
char a;
int i;
long int b;
long long int c;
float f;

printf("size of a char is: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int is: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of long int is: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of long long int is: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a float is: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
