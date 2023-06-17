#include <stdio.h>
/**
 * main - A program that prints hexidecimal numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	char high;

	for (d = '0'; d <= '9'; d++)
		putchar(d);

	for (high = 'a'; high <= 'f'; high++)
		putchar(high);
	putchar('\n');

	return (0);
}
