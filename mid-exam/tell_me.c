#include <stdio.h>

int main()
{  
    int T,N,X;
    scanf ("%d",&T);

    for (int i = 1; i <= T; i++)
    {
        scanf ("%d",&N);

        int A[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d",&A[i]);
        }
        
        scanf ("%d",&X);

        int count=0;
        for (int i = 0; i < N; i++)
        {
            if(A[i]==X)
            {
                count++;
            }
        }

        if (count>0)
        {
            printf("YES\n");
        }else
        {
            printf("NO\n");
        }
        
    }
    
    
    
    return 0;
}