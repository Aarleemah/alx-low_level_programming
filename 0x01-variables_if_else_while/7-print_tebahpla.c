#include <stdio.h>

/**
* main - Prints the letters of the alphabet.
*
* Return: Always 0
*/
int main(void)
{
char Revalpha[26] = "zyxwvutsrqponmlkjihgfedcba";
int i;

for (i = 0; i < 26; i++)
{
putchar(Revalpha[i]);
}
putchar('\n');
return (0);
}
