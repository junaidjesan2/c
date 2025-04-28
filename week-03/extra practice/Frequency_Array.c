#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int ct[m + 1];
    for (int i = 1; i <= m; i++)
    {
        ct[i] = 0;
    }
    
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }


    for (int j = 0; j < n; j++)
    {
        if (ar[j] < n)
        {
            ct[ar[j]]++;
        }
    }
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", ct[i]);
    }

    return 0;
}