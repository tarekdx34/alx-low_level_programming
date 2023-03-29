#include "main.h"
/**
 *reverse_array -  reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int a5r = n - 1;
int awl = 0;
int temp;
while (a5r > awl)
{
temp = *(a + awl);
*(a + awl) = *(a + a5r);
*(a + a5r) = temp;
a5r--;
awl++;
}
}
