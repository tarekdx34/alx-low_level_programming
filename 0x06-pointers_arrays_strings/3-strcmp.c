#include "main.h"
/**
 *_strcmp -  compares two strings
 *@s1:first string
 *@s2:secont string
 *Return:an integer indicating the result of the comparison
 */
int _strcmp(char *s1, char *s2)
{
int sum1 = 0;
int sum2 = 0;
while (*s1 != '\0')
{
sum1 = sum1 + *s1;
s1++;
}
while (*s2 != '\0')
{
sum2 = sum2 + *s2;
s2++
}
return (sum1 - sum2);
}
