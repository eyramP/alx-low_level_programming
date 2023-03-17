#include <stdio.h>

/**
 * main - Print both lowercase and uppercase alphabets
 *
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 54; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
