#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - is a function that prints a sentence
 * function is executed
 * You're beat! and yet, you must allow,\nI bore my house upon my back is the sentence
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
