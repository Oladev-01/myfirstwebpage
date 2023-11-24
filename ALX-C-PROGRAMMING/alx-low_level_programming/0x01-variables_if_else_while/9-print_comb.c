#include <stdio.h>
/**
 * main - this program prints all combinations of single digit numbers
 * Return: 0 on success
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a != 9)   /* this checks for the end of the comma and the space*/
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
