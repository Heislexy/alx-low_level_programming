#include "main.h"

/**
 * reset_to_98 - resets
 * @n: int pointer
 * Return: nothing
 */

void reset_to_98(int *n)
{
	int *p;

	p = &*n;
	*p = 98;
}
