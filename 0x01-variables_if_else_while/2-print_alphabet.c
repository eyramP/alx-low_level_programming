#include <stdio.h>

/**
 * main - Print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabets[52] = "abcdefghijklmnopqrstuvwxyzABCEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');
	return (0);
}
