#include "main.h"

/**
* print_alphabet_x10 - Prints 10 times the alphabet in lowercase
**/

void print_alphabet_x10(void)

{
int coun = 0;
char alpha;
while (coun++ <= 9)
{
for (alpha = 97; alpha <= 122; alpha++)
_putchar(alpha);
_putchar('\n');
}
}
