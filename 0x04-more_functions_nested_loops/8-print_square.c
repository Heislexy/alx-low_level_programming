#include "main.h"

/**
 * print_square - prints square
 * @size: integer size of square
 * Return: void
 */

void print_square(int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
