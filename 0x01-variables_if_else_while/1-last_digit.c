#include <stdio.h>

/**
* main - Prints the letters of the alphabet.
*
* Return: Always 0
*/
int main(void)
{
 char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
  int i;

for (i=0; i < 26; i++)
{
  putchar(alpha[i]);
}
putchar('\n');
return (0);
}
