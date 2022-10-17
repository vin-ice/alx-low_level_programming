#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
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
    int num;

    va_start(pa, n);
    for (i = 0; i < n; i++)
    {
        num = va_arg(pa, int);
        printf("%d", num);
        if (i < (n - 1) && separator)
            printf("%s", separator);
    }
    printf("\n");
    va_end(pa);
}
