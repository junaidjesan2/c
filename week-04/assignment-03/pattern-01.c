#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n - i + 1; j++)
        {
            printf(" ");
        }
        int ch;
        if (i % 2 == 0)
        {
            ch = '-';
        }
        else
        {
            ch = '#';
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    for (int i = n-1; i >=1; i--)
    {
        for (int j = 1; j < n - i + 1; j++)
        {
            printf(" ");
        }
        int ch;
        if (i % 2 == 0)
        {
            ch = '-';
        }
        else
        {
            ch = '#';
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}