#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
    int length = strlen(s);
    int i;

    for (i = 0; i < length / 2; i++)
    {
        if (s[i] != s[length - i - 1])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char s[1001];

    scanf("%s", s);

    int res= is_palindrome(s);
    if (res)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}
