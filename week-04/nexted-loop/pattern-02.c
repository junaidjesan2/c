#include <stdio.h>

int main()
{  
    int N, K=1,s;
    scanf("%d",&N);
    s=N-1;
    for (int i = 1; i <= N; i++)
    {
        for (int i = 1; i <= s; i++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= K; j++)
        {
            printf("*");
        }
        s--;
        K=K+2;
        printf("\n");
    }
    
    return 0;
}