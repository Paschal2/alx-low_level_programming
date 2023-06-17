#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');

	return (0);
}
