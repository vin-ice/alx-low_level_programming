#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
    char c;
    int i;
    char *s;
    float f;
    va_list pa;

    va_start(pa, format);
    
    printf("\n");
}