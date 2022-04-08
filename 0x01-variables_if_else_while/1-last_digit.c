#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main- Entry point
*       Prints a random number and states whether
*        it is positive, negative, or zero.
* Return: Always 0.
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("LAst digit od%d is %d %s\n", n, n%10,
((
root@e0a4fdf416a2:/alx-low_level_programming/0x01-variables_if_else_while# cat > 1-last_digit
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main- Entry point
*       Prints a random number and states whether
*        it is positive, negative, or zero.
* Return: Always 0.
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digit of %d is %d %s\n", n, n % 10,
((n % 10)== 0) ? "and is 0"
: ((n % 10) > 5) ? "and is greater than 5"
: "and is less than 6 and not 0"));

return (0);
}
