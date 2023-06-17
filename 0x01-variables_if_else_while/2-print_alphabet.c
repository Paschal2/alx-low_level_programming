#include <stdio.h>
/**
 * main - Print the alphabets in lowercase
 * Return: Always 0 (Succcess)
 */
int main(void)
{
	char alp[26] - "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i - 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar("\n");
	return (0);
}
