#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index
 * 
 * Return: returns value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
    return (n >> index);
}