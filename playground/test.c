#include <stdio.h>
#include <string.h>

void print_rev(char *s)
{
    int len = strlen(s);
    int last = len - 1;
    int i = 0;
    int hold;

    while (i <= last)
    {
        hold = s[i];
        s[i] = s[last];
        s[last] = hold;
        i++;
       last--;
    }
    printf("%s\n", s);
}

int main(void)
{
    char str[] = "I do not fear computers. I fear the lack of them - Isaac Asimov";

    print_rev(str);
    return 0;
}
