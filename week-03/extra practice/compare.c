#include <stdio.h>
#include <string.h>

int main()
{
    char str[25], str2[25];
    scanf("%s %s", &str, &str2);

    int res = strcmp(str, str2);
    if (res < 0)
    {
        printf("%s", str);
    }
    else if (res > 0)
    {
        printf("%s", str2);
    }
    else
    {
        printf("%s", str2);
    }
}