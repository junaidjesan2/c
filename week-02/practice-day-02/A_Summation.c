#include <stdio.h>

int main()
{  
    long int N;
    scanf("%ld", abs(&N));

    long long int A[N];
    int sum=0;
    

    for (int i = 0; i < N; i++)
    {
        scanf("%lld",&A[i]);
    }
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
    }
    int res=abs(sum);
    printf("%d",res);
    
    return 0;
}