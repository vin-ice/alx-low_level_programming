#include "main.h"
/**
 * _pow - raises an integer by a power
 * @base: base of number
 * @pow: power
 * 
 * Return: returns power
 */ 
int _pow(int b, int a)
{
    int result;
     
    if (a == 0)
        return (1); 
    for (result = 1; a > 0; a--)
        result *= b;
    return (result);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary string pointer
 * 
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int num, intArr[100];
    int i, pos;

    if (b == NULL)
        return (0);
    for (i = 0; *(b + i); i++)
    {
        if (*(b + i) == '0')
            intArr[i] = 0;
        else if (*(b + i) == '1')
            intArr[i] = 1;
        else
            return (0);        
    }
    i--;
    for (num = 0, pos = 0; i >= 0; i--, pos++)
        num += (_pow(2, pos) * intArr[i]);
    return (num);
}