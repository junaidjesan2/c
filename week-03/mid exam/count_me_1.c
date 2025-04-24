#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int c2 = 0;
    int c3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] % 3 == 0)
        {
            c2++;
        }
        else if (a[i] % 3 == 0)
        {
            c3++;
        }
        else if (a[i] % 2 == 0 && a[i] % 3 != 0)
        {
            c2++;
        }
    }
    printf("%d %d", c2, c3);

    return 0;
}