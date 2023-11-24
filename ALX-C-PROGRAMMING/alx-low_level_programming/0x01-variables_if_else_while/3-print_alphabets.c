#include <stdio.h>
/**
 * main - this program prints alphabets out in lowercases
 * followed by uppercases
 * Return: 0 on success
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
