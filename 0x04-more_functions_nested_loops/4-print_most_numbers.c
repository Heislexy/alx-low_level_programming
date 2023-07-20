#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 apart from 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9' && (i != '2' || i != '4'); i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
