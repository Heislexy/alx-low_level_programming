#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @i: integer
 * Return: the last digit
 */

int print_last_digit(int i)
{
	int lst = i % 10;

	_putchar(lst);
	return (lst);
}
