root@e0a4fdf416a2:/alx-low_level_programming/0x00-hello_world# cat > 101-quote.c
#include <stdio.h>

#include <unistd.h>
/**
* main- Entry point
*
*Return: always 0
*/
int main(void)
{
write(2,
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
