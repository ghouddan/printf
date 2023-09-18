#include "main.h"
/**
 * _putb8 - Description of the function.
 * @nb : number to convert
 * @lent : traker of output
 * Return: Description of the return value (if applicable).
 */
void _putb8(unsigned int nb, int *lent)
{
	int i;
	int numDigits = 0;
	int octal[20];

	if (nb == 0)
	{
		_putchar('0', lent);
		return;
	}
	while (nb > 0)
	{
		octal[numDigits] = nb % 8;
		 numDigits++;
		nb /= 8;
	}
	for (i = numDigits - 1; i >= 0; i--)
		_putchar('0' + octal[i], lent);
}
