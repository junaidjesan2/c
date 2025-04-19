#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int index, value;
    scanf("%d %d", &index, &value);
    int upArr[n + 1];

    for (int i = 0; i <= n; i++)
    {
        if (i < index-1)
        {
            upArr[i] = arr[i];
        }
        else if (i == index-1)
        {
            upArr[i] = value;
        }
        else
        {
            upArr[i] = arr[i - 1];
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", upArr[i]);
    }

    return 0;
}