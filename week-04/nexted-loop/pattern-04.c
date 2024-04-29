#include <stdio.h>

int main()
{
    int n, K = 1, s;
    scanf("%d", &n);
    s = n - 1;
    for (int i = 1; i <= (n*2); i++)
    {
        for (int k = 0; k <= s; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= K; j++)
        {
            printf("*");
        }

        if (i<=n-1)
        {
            s--;
            K=K+2;
        }
        else
        {
            s++;
            K=K-2;
        }
        printf("\n");
    }
    return 0;
}