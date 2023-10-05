#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int checkfor(char *str)
{
	unsigned int a = 0, alpha_count = 0, num_count = 0, spec_count = 1;
	bool alpha = false, dig = false, spec = false;

	if (str == NULL)
	{
		printf("No string to check\n");
		return (1);
	}

	while (str[a] != '\0')
	{
		if ((str[a] >= 'a' && str[a] <= 'z') || (str[a] >= 'A' && str[a] <= 'Z'))
		{
			alpha = true;
			alpha_count++;
		}
		else if (str[a] >= 48 && str[a] <= 57)
		{
			dig = true;
			num_count++;
		}
		else if (str[a] >= '\0' || str[a] >= ' ' || str[a] == '\n' || str[a] == '\t' || (str[a] >= '!' && str[a] <= '/') || (str[a] >= ':' && str[a] <= '@') || (str[a] >= '[' && str[a] <= '`') || (str[a] >= '{' && str[a] <= '~'))
		{
			spec = true;
			spec_count++;
		}
		a++;
	}

	if (alpha)
		printf("Number of Alphabets in the string is : %d\n", alpha_count);

	if (dig)
		printf("Number of Digits in the string is : %d\n", num_count);

	if (spec)
		printf("Number of Special characters in the string is : %d\n", spec_count);

	if (!(spec) && !(dig) && !(alpha))
	{
		printf("No string to check\n");
		return (1);
	}

	return (0);
}

int main(void)
{
	char *str;

	str = "Welcome to w3resource.com";
	checkfor(str);
	putchar('\n');

	str = "";
	checkfor(str);
	putchar('\n');

	str = NULL;
	checkfor(str);
	putchar('\n');

	str = "#$$#$#$@@$^&		  \?\?\?<<<<:::";
	checkfor(str);
	putchar('\n');

	str = "Welcome";
	checkfor(str);
	putchar('\n');

	str = "12345";
	checkfor(str);
	putchar('\n');

	return (0);
}
