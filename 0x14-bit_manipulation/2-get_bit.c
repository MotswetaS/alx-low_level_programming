#include "main.h"

/**
 * get_bit - In this function, we will be returning
 * the value of a bit from any given index
 * @n: is the number to search
 * @index: will start from 0
 *
 * Return: value of the bit or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
