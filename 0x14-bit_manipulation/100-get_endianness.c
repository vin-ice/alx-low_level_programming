#include "main.h"
/**
 * get_endianness - checks endianness
 * 
 * Return: returns 0 or 1
 */
int get_endianness(void)
{
    unsigned int i = 1;
    char *c = (char *)&i;

    return (*c);
}