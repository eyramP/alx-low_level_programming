#include <stdio.h>

/**
 * main - Print alphanets in lowercase followed by new line.
 *
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	return (0);
}
