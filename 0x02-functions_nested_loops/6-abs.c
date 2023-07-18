#include "main.h"

/**
 * _abs - finds the asolute value of a given integer
 * @i: integer
 * Return: absolute value
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
