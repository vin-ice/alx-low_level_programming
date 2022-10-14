#include <stdarg.h>
int sum_them_all(const unsigned int n, ...)
{   
    int sum;
    va_list p;
    unsigned int i;

    if (n == 0)
      return (0);
    sum = 0;
    va_start(p, n);/* macro to start of loop*/
    /* va_arg(va_list, <type>) = yields next arg*/
    /*va_end*/
    for (i = 0; i < n; i++){
        sum += va_arg(p, int);
    }
    return (sum);

}