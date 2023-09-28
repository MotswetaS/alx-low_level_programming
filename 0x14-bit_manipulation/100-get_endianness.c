#include "main.h"

/**
 * get_endianness - wit thi sfunction we are checking the endianess of a function
 * Return: 0 is  big endian, 1 is little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
