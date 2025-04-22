#include <stdio.h>
#include <string.h>

int main()
{
    char str[1005];
    scanf("%s", str);
    int palindrom = 0;
    for (int j = 0; j < strlen(str) / 2; j++)
    {
        if (str[j] != str[strlen(str) - 1 - j])
        {
            palindrom = 1;
            break;
        }
    }
    if (palindrom)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}