#include <stdlib.h>
#include <time.h>
/*
 * main -Entry point
 * The variable n will store a different value everytime you ru this program
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() -RAND_MAX/2;
	if (n > 5)
		printf("and is greater than 5");
	else if (n == 0)
		printf("and is 0");
	else (n < 6 =! 0)
		printf("and is less than 6nand not 0");
	return (0);
}
