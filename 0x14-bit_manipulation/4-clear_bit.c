#include "main.h"

/**
 * clear_bit - we are setting the value of a bit to 0 qt any given index
 * @n: pointer to the number
 * @index: start index from zero
 *
 * Return: 1 - success , -1 ifailure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
