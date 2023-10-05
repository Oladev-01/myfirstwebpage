#include <stdio.h>
#include <string.h>
int checkfor(char *str)
{
    int a = 0, num = 0, alpha = 0, hold_num;
    int dig = 0, count = 0, hold_count;
    int spec = 0, spec_count = 1 , hold_spec;

    while (str[a] != '\0')
    {
        if (str[a] >= 97 && str[a] <= 122 || str[a] >= 65 && str[a] <= 90)
        {
            alpha = 1;
            num++;
            hold_num = num;
        }
        else if (str[a] >= 48 && str[a] <= 57)
        {
            dig = 1;
            count++;
            hold_count = count;
        }
        else if (str[a] == '\0' || str[a] == ' ' || str[a] == '.' || str[a] == ',' || str[a] == '\n' || str[a] == '\t' || str[a] == '?' || str[a] == '!')
        {
            spec = 1;
            spec_count++;
            hold_spec = spec_count;
        }
        a++;
    }
    printf("Number of Alphabets in the string is : %d\n", hold_num);
    printf("Number of Digits in the string is : %d\n", hold_count);
    printf("Number of Special characters in the string is : %d\n", hold_spec);
    return (0);
}
int main()
{
    char *str;
    str = "Welcome to w3resource.com";
    checkfor(str);
    return (0);
}