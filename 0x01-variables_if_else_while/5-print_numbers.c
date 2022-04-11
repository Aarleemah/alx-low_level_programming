#include <stdio.h>

/**
* main - Prints the letters of the alphabet.
*
* Return: Always 0
*/
int main(void)
{
char number[10] = "0123456789";
int i;

for (i = 0; i < 24; i++)
{
putchar (number[i]);
}
putchar('\n');
return (0);
}
