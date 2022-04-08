#include <stdio.h>
/**
* main - entry point
*
* Description: Print the lowercase alphabet
* Return: Always 0
*/
int main(void)
{
int r;

for (r = 0; r < 26; ++r)
putchar('a' + r);

putchar('\n');

return (0);
}
