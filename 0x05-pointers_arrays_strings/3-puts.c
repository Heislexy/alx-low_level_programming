#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
