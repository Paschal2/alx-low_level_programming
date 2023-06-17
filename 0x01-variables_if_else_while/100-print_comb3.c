#include <stdio.h>
/**
 * main - A program that prints combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
	int e, o;

	for (e = '0'; e <= '9'; e++)
	{
		for (o = e + 1; o <= '9' p++)
		{
			if (o != e)
			{
			putchar(e);
			putchar(o);
			if (e == '8' && o == '9')
				continue;
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
