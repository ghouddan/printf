#include "main.h"
#include <stdarg.h>
/**
 * _putnbr_u - Description of the function.
 * @n: uni
 * @lent: lent
 *
 * Return: Description of the return value (if applicable).
 */
void _putnbr_u(unsigned int n, int *lent)
{
	if (n < 10)
		_putchar(n + '0', lent);
	else
	{
		_putnbr(n / 10, lent);
		_putnbr(n % 10, lent);
	}
}
