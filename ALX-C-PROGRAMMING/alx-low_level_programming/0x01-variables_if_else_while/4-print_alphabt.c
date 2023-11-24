#include <stdio.h>
/**
 * main -= this function prints alphabets in lowercase
 * it prints the alphabets excepts q and e
 * Return: 0 on success
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
