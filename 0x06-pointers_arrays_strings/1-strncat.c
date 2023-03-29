#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: string to be appended to
 *@src: string to be appended
 *@n: the number of characters of dest string that i want to append
 *Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int ln = 0;
int i;

while (dest[ln] != '\0')
ln++;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[ln] = src[i];
ln++;
}
dest[ln] = '\0';
return (dest);
}
