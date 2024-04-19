#include <stdio.h>

int main()
{  
    long int N;
    scanf("%ld\n", &N);

    long long int A[N];
    
    for (int i = 0; i < N; i++)
    {
        scanf("%lld",&A[i]);
    }

    long long int X;
    scanf("%lld",&X);

    for (int i = 0; i < N; i++)
    {
        if (X==A[i])
        {
            printf("%d\n",i);
        }
        else
        {
            printf("%d",-1);
        }
        
        // printf("%lld\n",A[i]);
    }
    // printf("%d",X);
    
    return 0;
}