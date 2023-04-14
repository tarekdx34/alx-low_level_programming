#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of  elements
 * @size: size in bytes
 * Return:returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p = NULL;

if (nmemb == 0 || size == 0)
return (NULL);

p = malloc(size * nmemb);
if (p == NULL)
return (NULL);
return (p);
}
