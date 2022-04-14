#include "main.h"

/**
* print_numbers - prints the number zero to nine
*
* Return: Always 0
8
root@e0a4fdf416a2:/alx-low_level_programming/0x04-more_functions_nested_loops# cat > 3-print_numbers.c
#include "main.h"

/**
* print_numbers - prints the number zero to nine
*
* Return: Always 0
*/

void print_numbers(void)
{

int i;

for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
