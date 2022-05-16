#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters
 * @n: the numbers of arguments being passed through
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0, i;
va_list list;
int sum;
va_start(list, n);
for (i = 0, sum = 0; i < n; i++)
sum += va_arg(list, int);
va_end(list);
return (sum);
}
