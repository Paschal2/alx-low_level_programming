#include <stdio.h>
/**
 * main - A program that prints the size of various comp
 * Return: 0
 */
int main(void)
{
printf("Size of char: %lu byte(s)\n", sizeof(char));
printf("Size of int: %lu byte(s)\n", sizeof(int));
printf("Size of long: %lu byte(s)\n", sizeof(long));
printf("Size of long long: %lu byte(s)\n", sizeof(long long));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
printf("Size of unsigned char: %lu byte(s)\n", sizeof(unsigned char));
printf("Size of unsigned int: %lu byte(s)\n", sizeof(unsigned int));
printf("Size of unsigned long: %lu byte(s)\n", sizeof(unsigned long));
printf("Size of unsigned long long: %lu byte(s)\n", sizeof(unsigned long long));
printf("Size of unsigned float: %lu byte(s)\n", sizeof(unsigned float));

return (0);
}
