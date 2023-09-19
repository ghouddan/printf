#include "main.h"
/**
 * _put_rev - writes the character c to stdout
 * @string: string 
 * @lent : counter
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _put_rev(char *string, int *lent)
{
	int i = 0, j;
	while (string[i])
		i++;
	for (j = i - 1; j >= 0; j--)
		_putchar(string[i], lent);
}
