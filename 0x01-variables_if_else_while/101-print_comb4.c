#include <stdio.h>

/**
* main - print triple combos
* 
* Description: print triple digit combos
*
* Return: Always 0
*/

int main(void)
{
int j, k, l;

j = 48;
k = 48;
l = 48;

while (j < 58)
{
k = j + 1;
while (k < 58)
{
l = k + 1;
while (l < 58)
{
putchar(j);
putchar(k);
putchar(l);
if (j < 55 || k < 56 || l < 57)
{
putchar(44);
putchar(32);
}
l++;
}

k++;
}

j++;
}

putchar(10);

return (0);
}
