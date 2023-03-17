#include <stdio.h>

/**
 * main - Print all single digits of base 10 starting from zero.
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digits[10] = "123456789";

	for (int i = 0; i < 10; i++)
	{
		putchar(digits[i]);
	}
	putchar('\n');
	return (0);
}
