#include "main.h"

/**
 * _isalpha - checks if a char is an alphabet.
 * @c: ASCII character
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') && (c >= 'a' && c<='z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
