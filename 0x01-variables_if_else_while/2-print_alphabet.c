#include <stdio.h>
/**
 * main - Print the alphabets in lowercase
 * Return: Always 0 (Succcess)
 */
int main(void)
{
	char c;

	c = "a";
	while (c <= "z")
	{
		putchar(c);
		c++;
	}
	putchar("\n");
	return (0);
}
