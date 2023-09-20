#include "main.h"
/**
 * _putb2 - Description of the function.
 * @nb : number to convert
 * @lent : traker of output
 * Return: Description of the return value (if applicable).
 */
void _putb2(int nb, int *lent)
{
	 int i = 0, j;
	unsigned int n;
	if (nb < 0)
		n = (unsigned int)-nb;
	else
		n = (unsigned int)nb;

	if (n == 0)
	{
		_putchar('0', lent);
		return;
	}
	while ((unsigned int)(1 << i) <= n)
		i++;
	for (j = i - 1; j >= 0; j--)
	{
		if (n & (1 << j))
			_putchar('1', lent);
		else
			_putchar('0', lent);
	}
}
