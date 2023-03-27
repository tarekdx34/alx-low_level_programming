#include "main.h"
/**
 *void swap_int -  swaps the values of two integers.
 *@a:pointer to the 1st integer.
 *@b:pointer to the 2nd integer.
 */
void swap_int(int *a, int *b)
{
  int swap;
  swap = *a;
  *a = *b;
  *b = swap;
}
