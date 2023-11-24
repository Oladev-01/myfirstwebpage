#include <unistd.h>
#include <string.h>
/**
 * main - this program prints a certain
 * string to stdout using the write function
 * Return: 0 on success
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int len = strlen(str);

	write(STDERR_FILENO, str, len);
	return (1);
}
