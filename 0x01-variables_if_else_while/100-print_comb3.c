#include <stdio.h>

/**
* main - print double digit combos
*
* Description: print double digit combos
*
* Return: Always 0
*/

int main(void)
{
int j, k;

j=48;
k = 48;

while (j < 58)
{
k = j + 1;
while (k < 58)
{
putchar(j);
putchar(k);

if (j < 56 || k < 57)
{
putchar(44);
putchar(32);
}
k++;
}

j++;
}

putchar(10);

return (0);
}
