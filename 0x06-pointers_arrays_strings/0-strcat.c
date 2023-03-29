#include "main.h"
/**
 *_strcat - function that concatenates two strings.
 *@dest:string to be appended to
 *@src:string to append
 *Return: Concatenates string.
 */
char *_strcat(char *dest, char *src)
{
  int ln;
  int i;

  while (dest[ln] != '\0')
    ln++;
  while (src[i] != '\0')
    {
      dest[ln] = src[i];
      i++;
      ln++;
    }
  dest[ln] = '\0';
  return (dest);
}
