#include <stdio.h>
/**
 * main - this program prints combination of two diferrent two-digits numbers
 * Return: 0 on success
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar(a / 10 + '0'); //getting the tens division i.e the tens value of the integer
			putchar(a % 10 + '0'); // getting the remainder i.e the unit value of the integer
			putchar(' ');
			putchar(b / 10 + '0'); // same as for variable 'a'
			putchar(b % 10 + '0');
			if (a != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
//code runs successfully!