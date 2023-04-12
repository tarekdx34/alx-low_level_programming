#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - convert arguments on command line to strings
 * @ac: int type
 * @av: pointer to array
 * Return: arguments as strings
 */
char *argstostr(int ac, char **av)
{
int one, two, three, size;
char *s;

if (ac == 0 || av == NULL)
return (NULL);
for (one = 0; one < ac; one++)
{
for (two = 0; av[one][two] != '\0'; two++)
size += 1;
size += 1;
}
size += 1;
s = malloc(sizeof(char) * size);
if (s == NULL)
{
free(s);
return (NULL);
}
for (one = 0; one < ac; one++)
{
for (two = 0; av[one][two] != '\0'; two++)
{
s[three] = av[one][two]
three++;
}
s[three] = '\n';
three++;
}
s[three] = '\0';
return (s);
}
