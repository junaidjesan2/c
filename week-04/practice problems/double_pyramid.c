#include <stdio.h>

int main()
{
    int n, s, s2 = 0, k = 1, k2;
    scanf("%d", &n);
    s = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        s--;
        k += 2;
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        s++;
        for (int j = s; j >=1; j--)
        {
            printf(" ");
        }
        k -= 2;
        for (int j = k; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}