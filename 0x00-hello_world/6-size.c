#include <stdio.h>
/**
 * main - A program that prints the size of various comp
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of char: %lu byte(s)\n", (unsigned char)sizeof(a));
printf("Size of int: %lu byte(s)\n", (unsigned int)sizeof(b));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of long long int: %lu byte(s)\n", (unsigned long long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned float)sizeof(f));

return (0);
}
