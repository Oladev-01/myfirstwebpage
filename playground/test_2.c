#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    int str[10];
    int hold;

    for (a = 0; a <= 9; a++)
    {
        hold = ((a + 1) * (a + 1));
        str[a] = hold;
        if (a < 9)
        {
          printf("%d, ", str[a]);
        }
        else
        {
            printf("%d", str[a]);
        }
    }
    printf("\n");
}