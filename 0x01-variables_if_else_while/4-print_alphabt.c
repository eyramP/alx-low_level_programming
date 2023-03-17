#include <stdio.h>

/**
 * main - Print alphanets in lowercase followed by new line.
 *
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha[25] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 25; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
