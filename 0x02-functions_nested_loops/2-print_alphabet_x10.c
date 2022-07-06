#include "main.h"

/**
* print_alphabet_x10 - Prints 10 times the alphabet in lowercase
*/

void print_alphabet_x10(void)
{
int c;
int x;
for (x = 0; x < 10; x++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
