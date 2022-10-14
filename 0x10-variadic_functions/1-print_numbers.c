#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list pa;

    if (n == 0)
    {
        printf("\n");
        exit(0);
    }
    va_start(pa, n);
    for (i = 0; i < n; i++)
    {
       
        printf("%d", va_arg(pa, int));
        if (i < (n - 1))
        {
            if (separator != NULL)
                printf("%s", separator);
        }
    }
}