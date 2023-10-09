#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (Correct)
 */
int main(void)
{
printf("size of a char: %lu byte(s)", sizeof(char));
printf("size of an int: %lu byte(s)", sizeof(int));
printf("size of a long int: %lu byte(s)", sizeof(long int));
printf("size of a long long int: %lu byte(s)", sizeof(long long int));
printf("size of a float: %lu byte(s)", sizeof(float));
return (0);
}
