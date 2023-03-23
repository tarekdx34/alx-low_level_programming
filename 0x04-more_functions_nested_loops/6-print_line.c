#include "main.h"
/**
 * print_line - print the character "_" n times to draw a line
 *@n : number of times we print "_"
 */
void print_line(int n)
{
  int i;
  if (n > 0)
    {
      for (i = 0 ; i <= n ; i++)
	_putchar(' ');
    }
  _putchar('\n');
}
