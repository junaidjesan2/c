#include <stdio.h>

int main()
{  
    long int N;
    scanf("%ld",&N);
    if (N>0)
    {
        for (int i = 1; i <= N; i++)
        {
            printf("%d ",i);
        }
    } else if (N<0)
    {
        for (int i = N ; i <=0; i++)
        {
            printf("%d ",i);
        }
        
    }
    
    return 0;
}