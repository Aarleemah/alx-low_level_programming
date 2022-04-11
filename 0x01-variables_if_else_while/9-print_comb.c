#include <stdio.h>

/**
* main - prints single numbers
*
* Description: prints single numbers with commas
*
* Return: Always 0
*/

int main(void)
{
int i;

i = 48;

while (i < 58)
{
putchar(i);
if (i != 57)
{
putchar(44);
putchar(32);
}
i++;
}

putchar(10);

return (0);
}
