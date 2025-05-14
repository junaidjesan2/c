#include<stdio.h>

long long int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1; 
    else
        return n * factorial(n - 1);
}
int main(){
    int n;
    scanf("%d", &n);
    
    long long int result = factorial(n);
    printf("%lld", result);
    return 0;
}