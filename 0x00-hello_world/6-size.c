#include <stdio.h>

/**
 *main - main block
 *Return: 0
 */
int main(void)
{
char charType;
int intType;
long int longIntType;
long long int longLongType;
float floatType;

printf("Size of a char: 1 byte(s)\n", sizeof(charType));
printf("Size of an int: 4 byte(s)\n", sizeof(intType));
printf("Size of a long int: 4 byte(s)\n", sizeof(longIntType));
printf("Size of a long long int: 8 byte(s)\n", sizeof(longLongType));
printf("size of a float: 4 byte(s)\n", sizeof(floatType));
return (0);
}
