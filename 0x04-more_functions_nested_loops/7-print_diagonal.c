#include "main.h"

/**
* print_diagonal - Draws a diagonal line using the \ character.
* @n: The number of \ characters to be printed.
*/

void print_diagonal(int n)
{
int len, space;
if (n <= 0)
_putchar('\n');
else
{
for (len = 0; len < n; len++)
{
for (space = 0; space < len; space++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}
