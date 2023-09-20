#include "main.h"
#include <stdarg.h>
/**
 * _putnbr - Description of the function.
 * @n: int
 * @lent: lent
 * Return: Description of the return value (if applicable).
 */
void _putnbr(int n, int *lent)
{
	if (n == INT_MIN)
	{
		_putchar('-', lent);
		_putchar('2', lent);
		n %= 1000000000;
		n *= -1;
	}
	if (n < 0)
	{
		_putchar('-', lent);
		n *= -1;
	}
	if (n < 10)
		_putchar(n + '0', lent);
	else
	{
		_putnbr(n / 10, lent);
		_putnbr(n % 10, lent);
	}
}
