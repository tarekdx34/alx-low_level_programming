#include "main.h"
/**
 *_strlen - function that returns the length of a string.
 *@s: pointer to array of charactars=string.
 */
int _strlen(char *s)
{
int length=0;
  
while (*s != '\0' )
{
length++;
s++;
}
return (length);
}
