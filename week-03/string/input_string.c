#include <stdio.h>

int main()
{
    char str[1000];
    for (int i = 0; i < 1000; i++)
    {
        scanf("%c", &str[i]);
    }
    for (int i = 0; i < 1000; i++)
    {
        if (str[i] == '\\')
        {
            break;
        }
        printf("%c", str[i]);
    }

    return 0;
}