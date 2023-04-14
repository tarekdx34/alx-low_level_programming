#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range -  creates an array of integers
 * @min: the first number
 * @max: the last number
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
int keke = 0, i = 0;
int *ptr;

if (min > max)
return (NULL);
keke = (max - min);
ptr = malloc(sizeof(int) * keke);
for (i = 0; i <= keke; i++)
{
if (min < max)
{
ptr[i] = min;
min++;
}
}
if (ptr == NULL)
return (NULL);
return (ptr);
}
