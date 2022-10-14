#include "variadic_functions.h"
/**
* sum_them_all - sums all parameters
*@n: number of parameters
*
*Return: returns sum af paramters
*/
int sum_them_all(const unsigned int n, ...)
{   
    int sum;
    va_list p;
    unsigned int i;

    if (n == 0)
      return (0);
    sum = 0;
    va_start(p, n);
    for (i = 0; i < n; i++)
        sum += va_arg(p, int);
    va_end(p);
    return (sum);
}
