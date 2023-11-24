#include <stdio.h>
/**
 * main - this program prints the alphabets in reverse
 * Return: 0 on success
 */
int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--) /* iterate in reverse from 'z' to 'a' */
	{
		putchar(c); /* prints the character */
	}
	putchar('\n');
	return (0);
}
