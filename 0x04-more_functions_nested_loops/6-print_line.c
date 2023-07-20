#include "main.h"

/**
 * print_line - prints line
 * @n: integer
 * Return: void
 */

void print_line(int n)
{
	for (n = n; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n')
}
