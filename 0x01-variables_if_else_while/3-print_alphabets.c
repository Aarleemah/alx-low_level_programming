#include <stdio.h>

/**
* main - Prints the letters of the alphabet.
*
* Return: Always 0
*/
int main(void)
{
char letter[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 52; i++)
{
putchar (letter[i]);
}
putchar('\n');
return (0);
}
