#include <stdio.h>

/**
 * main - Print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 27; i++)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');
	return (0);
}
