#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the beggining of the code
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("The number %d is positive.\n", n);
} else if (n < 0)
{
	printf("The number %d is negative.\n", n);
} else
{
	printf("The number is zero.\n");
}
return (0);
}
