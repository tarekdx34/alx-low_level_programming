#include "main.h"
void print_alphabet_x10(void)
{
int i=0;
char xio = 'a';
while (i <= 9)
{while (xio <= 'z')
{
_putchar(xio);
xio++;
}

_putchar('\n');
}      
}
