#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog -  prints a struct dog
 * @d :dog structure pointer
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
if (d != NULL && d->name != NULL)
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);

}
if (d->name == NULL || d->owner == NULL)
printf("(nil)");
}
