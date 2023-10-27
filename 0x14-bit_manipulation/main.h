#ifndef MAIN_H
#define MAIN_H

unsigned int flip_bits(unsigned long int n, unsigned long int m);
int clear_bit(unsigned long int *n, unsigned int index);
int _atoi(const char *s);
int get_endianness(void);
unsigned int binary_to_uint(const char *b);
int set_bit(unsigned long int *n, unsigned int index);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int _putchar(char c);

#endif
