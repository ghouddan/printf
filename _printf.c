#include "main.h"

/**
 * flage - Description of the function.
 * @args : argument list
 * @forma : type of the varaible
 * @lent : kep traque of the argument passe
 * Return: Description of the return value (if applicable).
 */
static void flage(va_list args, const char forma, int *lent)
{
	if (forma == 'c')
		_putchar(va_arg(args, int), lent);
	else if (forma == 's')
		_putstr(va_arg(args, char *), lent);
	else if (forma == '%')
		_putchar(forma, lent);
	else if (forma == 'd' || forma == 'i')
		_putnbr(va_arg(args, int), lent);
	else if (forma == 'b')
		_putb2(va_arg(args, unsigned int), lent);
	else if (forma == 'n')
		_putchar('\n', lent);
	else if (forma == 'X' || forma == 'x')
		_putXx(va_arg(args, unsigned int), forma, lent);
	else if (forma == 'u')
		_putnbr_u(va_arg(args, int), lent);
	else if (forma == 'o')
		_putb8(va_arg(args, unsigned int), lent);
	else if (forma == 'p')
		_put_add(va_arg(args, void *), lent);
	else if (forma == 'r')
		_put_rev(va_arg(args, char *), lent);
	else
	{
		_putchar('%', lent);
		_putchar(forma, lent);
	}
}

/**
 * _printf - Description of the function.
 * @forma : type of the varaible
 * @...: Description of the variadic arguments.
 * Return: Description of the return value (if applicable).
 */
int _printf(const char *forma, ...)
{
	int lent, i;
	va_list args;

	lent = 0;
	i = 0;
	va_start(args, forma);
	if (!forma)
		return (-1);
	while (forma[i])
	{
		if (forma[i] == '%')
		{
			i++;
			if (!forma[i])
			{
				_putchar('%', &lent);
				break;
			}
			flage(args, forma[i], &lent);
		}
		else
			_putchar(forma[i], &lent);
		i++;
	}
	va_end(args);
	return (lent);
}
