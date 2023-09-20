#ifndef MAIN_H
#define MAIN_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int _printf(const char *forma, ...);
void _putchar(char c, int *lent);
void _putstr(char *s, int *lent);
void _putnbr(int n, int *lent);
void _putb2(int n, int *lent);
void _putXx(unsigned int n, char x, int *lent);
void _putb8(unsigned int n, int *lent);
void _putnbr_u(unsigned int n, int *lent);
void _put_add(void *p, int *lent);
void _put_rev(char *string, int *lent);
#endif
