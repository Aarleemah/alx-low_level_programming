#include <stdio.h>

/**
* main - print pairs of double digit combos
*
* Description: print pairs of double digit combos
*
* Return: Always 0
*/

int main(void)
{
int j, k, l, m;

j = 48;
while (j < 58)
{
k = 48;
while (k < 58)
{
m = k + 1;
l = j;
while (l < 58)
{
while (m < 58)
{
putchar(j);
putchar(k);
putchar(32);
putchar(l);
putchar(m);
if (j < 57 || k < 56 || l < 57 || m < 57)
{
putchar(44);
putchar(32);
}
m++;
}
m = 48;
l++;
}
k++;
}
j++;
}
putchar(10);
return (0);
}
