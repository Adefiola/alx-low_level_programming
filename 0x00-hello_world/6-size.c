#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
long int longIntType;
long long int longLongType;
float floatType;

printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(longInt));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongInt));
printf("size of a float: %zu byte(s)\n", sizeof(float));

return (0);
}
