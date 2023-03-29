#include "main.h"
/**
 *_strncpy - copies a string
 *@dest:the string that function copy to
 *@src:the copied string
 *@n: the number of character from string src that i want to copy
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int ln = 0;
int i;
while (src[ln] != '\0')
ln++;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
while (ln < n)
{
dest[ln] = '\0';
ln++;
}
return (dest);
}
