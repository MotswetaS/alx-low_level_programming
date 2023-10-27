#include "main.h"

/**
 * get_endianness - In this function we will be checking funcion endianess
 *
 * Return: 0 is  big endian, 1 is little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
