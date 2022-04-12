#include "main.h"

/**
* print_alphabet - prints the alphabet in lowercase, followed by a new line.
* main - main block
root@e0a4fdf416a2:/alx-low_level_programming/0x02-functions_nested_loops# cat > 1-alphabet.c
#include main.h

/**
* print_alphabet - prints the alphabet in lowercase, followed by a new line.
*/
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);

_putchar('\n');
}
