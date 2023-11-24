#include <stdio.h>
/**
 * main - this program prints all the integers of the base 10
 * Return: 0 on success
 */
int main(void)
{
	int base;

	for (base = 0; base <= 9; base++)
	{
		putchar(base + '0');
	}
	putchar('\n');
	return (0);
}
