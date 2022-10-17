#include <stdarg.h>
#include <stdio.h>
/**
*print_strings - prints strings, followed by new line
*@separator: separates strings printed
*@n: number of strings to print
*
*Return: returns void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list pa;
    char *ele;
    
    va_start(pa, n);
    for (i = 0; i < n; i++)
    {
        if ((ele = va_arg(pa, char *)) == NULL)
        {
            printf("(nil)");
            continue;
        }
        printf("%s", ele);
        if (i < (n - 1) && separator)
                printf("%s", separator);
    }
    printf("\n");
    va_end(pa);
}
