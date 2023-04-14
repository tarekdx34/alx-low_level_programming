#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: the fist strign to concatenates to
 * @s2: the second string to concatenate
 * @n: number of bytes that will be concatenated to s1
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, l = 0, f = 0;
char *str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
i++;
while (s2[j])
j++;
if (n >= j)
l = i + j;
else
l = i + n;
str = malloc(sizeof(char) * l + 1);
if (str == NULL)
return (NULL);
j = 0;
while (f < l)
{
if (f <= i)
str[f] = s1[f];
if (f >= i)
{
str[f] = s2[j];
j++;
}
f++;
}
str[f] = '\0';
return (str);
}
