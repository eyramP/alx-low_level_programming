#include "main.h"
/**
 * _isalpha - Check for alpabetic character.
 * @c: Return 1 if c is letter, lowercase of uppercase and 0 if not.
 * Return: 1 if c is letter, and 0 if otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
	_putchar('\n');
}
