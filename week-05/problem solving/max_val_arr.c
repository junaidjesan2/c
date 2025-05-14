#include<stdio.h>

int main(){
    long long int n;
    scanf("%lld", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("%d", max);
    return 0;
}