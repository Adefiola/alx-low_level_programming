#include "main.h"

/**
* print_alphabet - Prints the alphabet in lowercase, followed by a newline
*/

void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}

int main(void)
{
print_alphabet();
return (0);
}
