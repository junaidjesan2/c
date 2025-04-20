#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int index1, index2;
    scanf("%d %d", &index1, &index2);
    int temp = arr[index1 - 1];
    arr[index1 - 1] = arr[index2 - 1];
    arr[index2 - 1] = temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}