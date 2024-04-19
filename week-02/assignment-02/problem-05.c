#include <stdio.h>

int main()
{  
    long int N;
    scanf("%ld\n",&N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&A[i]);
    }

    int X, V;
    scanf("%d",&X);
    scanf("%d",&V);
    for (int i = N-1; i >=0 ; i--)
    {
        if (X==i)
        {
            A[i]=V;
        }
        printf("%d ",A[i]);
    }
    return 0;
}