#include "main.h"
#include <stdlib.h>

/**
 * _putstr - writes the character c to stdout
 * @forma: The character to print
 * @lent : counter
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _putstr(char *forma, int *lent)
{
	int i = 0;
	if (forma == NULL)
	{
		_putstr("(null)", lent);
	}
	while (forma[i])
	{
		_putchar(forma[i], lent);
		i++;
	}
}
