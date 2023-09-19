#include "main.h"

/**
 * _put16- Description of the function.
 * @n : number to convert;
 * @x : FF or ff
 * @lent: counter
 *
 * Return: Description of the return value (if applicable).
 */
void _put16(unsigned long n, char x, int *lent)
{
	unsigned int baseX;
	char *base;

	baseX = 16;
	if (x == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n < baseX)
		_putchar(base[n % baseX], lent);
	else
	{
		_put16(n / baseX, x, lent);
		_put16(n % baseX, x, lent);
	}
}
/**
 * _put_add - writes the character c to stdout
 * @add: pointer to address
 * @lent : counter
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _put_add(void *add, int *lent)
{
	unsigned long int pointer;

	pointer = (unsigned long int)add;
	_putstr("0x", lent);
	_put16(pointer, 'x', lent);
}
