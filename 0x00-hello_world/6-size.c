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

printf("Size of a char: %lu byte(s)\n", sizeof(charType));
printf("Size of an int: %lu byte(s)\n", sizeof(intType));
printf("Size of a long int: %lu byte(s)\n", sizeof(longIntType));
printf("Size of a long long int: %lu byte(s)\n", sizeof(longLongType));
printf("size of a float: %lu byte(s)\n", sizeof(floatType));
return (0);
}
