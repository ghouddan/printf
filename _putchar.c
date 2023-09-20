#include "main.h"
#include <unistd.h>
#define SIZE 1024
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * @lent: inc
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _putchar(char c, int *lent)
{
	static char buffer[SIZE];
	static int index;
	
	buffer[++index] = c;
	
	if (index == SIZE)
	{
		write(1, buffer, SIZE);
		(*lent) += SIZE;
		index = 0;
	}
	write(1, &c, 1);
	(*lent)++;
}
