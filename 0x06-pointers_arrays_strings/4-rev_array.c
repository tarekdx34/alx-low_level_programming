#include "main.h"
/**
 *reverse_array -  reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int saved[50];
int i;
int l = 0;
for (i = 0; i <= n; i++)
{
saved[i] == *a;
a++;
}
for (i = n; i >= 0; i--)
{
*(a + l) = saved[i];
l++
}
}
