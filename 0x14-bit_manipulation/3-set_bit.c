#include "main.h"

/**
 * set_bit - This function will setting a value of a bit
 * at 1 for any given index
 * @n: pointer (adress) to the number to change
 * @index: will begin from 0
 *
 * Return: 1 for success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
