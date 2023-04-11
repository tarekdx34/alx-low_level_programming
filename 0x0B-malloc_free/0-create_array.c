#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *create_array - create an arry of size with char c
 * @size: unsigned int type
 * @c: char type
 * Return: Return pointer to array created
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;
if (size == 0)
return (NULL);
s = malloc((size) * sizeof(char));
if (s == NULL)
return (NULL);
for (i = 0; i < size ; i++)
s[i] = c;
s[i] = '\0';
return (s);
}
