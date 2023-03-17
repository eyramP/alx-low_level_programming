#include <stdio.h>

/**
 * main - Print alphanets in lowercase followed by new line.
 *
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	return (0);
}
