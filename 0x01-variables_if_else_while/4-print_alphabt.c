#include <stdio.h>

/**
 * main - Print alphanets in lowercase followed by new line.
 *
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha[26] = "abcdfghijklmnoprstuvwxyz";

	for (int i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	return (0);
}
