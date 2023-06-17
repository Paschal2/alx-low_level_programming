#include <stdio.h>
/**
 * main - A program that prints combinations
 * Return: Always 0 (Success)
 */

int main(voi)
{
	int digit = 0;

	while (digit < 10)
	{
		int otherdigit = digit + 1;

		while (otherdigit < 10)
		{
			putchar(digit + '0');
			putchar(otherdigit + '0');
			putchar(',');
			putchar(' ');

			otherdigit++;
		}

		digit++;
	}

	return (0)
}
