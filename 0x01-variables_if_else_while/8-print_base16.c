#include <stdio.h>

/**
* main - Prints the letters of the alphabet.
*
* Return: Always 0
*/
int main(void)
{
char num[16] = "0123456789abcdef";
int i;

for (i = 0; i < 16; i++)
{
putchar(num[i]);
}
putchar('\n');
return (0);
}
