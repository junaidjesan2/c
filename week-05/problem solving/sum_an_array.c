#include <stdio.h>

long long int sum_array(int arr[], int n)
{
    if (n == 0)
        return 0;
    else
        return arr[n-1] + sum_array(arr, n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    long long int sum = sum_array(arr, n);
    printf("%lld", sum);
    return 0;
}