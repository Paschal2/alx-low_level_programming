#include <stdio.h>
/**
 * main - Print the alphabets in lowercase
 * Return: Always 0 (Succcess)
 */
int main(void)
{
	char alpabet;

	for (alphabet = "a"; alphabet <= "z"; alphabet++)
	{
		putchar(alphabet);
	}
	putchar("\n");
	return (0);
}
