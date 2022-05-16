#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all parameters
 * @n: the numbers of arguments being passed through
 * ...: A variable number of paramters to calculate the sum o
 * Return: If n == 0, return 0
 * otherwise the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list nums;
unsigned int index, sum = 0;
va_start(nums, n);
for (index = 0; index < n; index++) 
sum += va_arg(nums, int);
va_end(nums);
return (sum);
}
