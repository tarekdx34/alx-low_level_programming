#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of integerss
 * @n : counter
 * @...: A number of parameters being passed to the function
 * Return: 0 if n ==0 ; if not return sum of all prameters
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
unsigned int sum = 0;
va_list nPtr;

va_start(nPtr, n);
for (i = 0; i < n; i++)
sum += va_arg(nPtr, int);
va_end(nPtr);
return (sum);
}
