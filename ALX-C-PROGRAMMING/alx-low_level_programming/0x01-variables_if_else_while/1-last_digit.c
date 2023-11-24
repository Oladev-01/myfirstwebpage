#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this program prints a random integer and checks the status of its
 * last digit
 * Return: 0 on success
 */
int main(void)
{
	int n, last_num;
	char *str = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_num = n % 10;
	if (n < 0 && last_num == 0)
		printf("%s %d is %d and is 0\n", str, n, last_num);
	else if (n < 0)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, last_num);
	else if (n == 0)
		printf("%s %d is %d and is 0\n", str, n, last_num);
	else if (n > 0 && last_num == 0)
	printf("%s %d is %d and is 0\n", str, n, last_num);
	else if (n > 0 && last_num > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, last_num);
	else if (n > 0 && last_num < 6 && last_num != 0)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, last_num);
	return (0);
}
