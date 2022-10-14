#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_numbers - prints numbers, followed by a new line
*@separator: seperates numbers
*@n: number of numbers to print
*
*Return: returns void
*/
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
