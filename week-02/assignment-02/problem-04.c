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

    int positive=0;
    int negative=0;

    for (int i = 0; i < N; i++)
    {
        if (V[i]>0)
        {
            positive +=V[i];
        }

        if (V[i]<0)
        {
            negative +=V[i];
        }
        
    }

    printf("%d ",positive);
    printf("%d",negative);
    
    return 0;
}