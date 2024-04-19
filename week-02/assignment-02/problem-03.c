#include <stdio.h>

int main()
{  
    long int N;
    scanf("%ld\n",&N);
    
    int V[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&V[i]);
    }

    for (int i = N-1; i >=0 ; i--)
    {
        if (i%2==1)
        {
        printf("%d ",V[i]);
        }
        
        
    }
    return 0;
}