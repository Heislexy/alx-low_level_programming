#include "main.h"

/**
 * _islower - checks if a letter is lowercase.
 * @c: ASCII code char
 * Return: always 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
