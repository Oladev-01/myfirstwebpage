#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this program prints random numbers to the stdout
 * and checks if the generated number is positive, zero or negative
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n); 

	if (n == 0)
		printf("%d is zero\n", n);

	if (n > 0)
		printf("%d is positive\n", n);

	return (0);
}
