#include <stdio.h>

int main()
{  
    int N, K=5;
    scanf("%d",&N);
    for (int i = N; i >=1; i--)
    {
        for (int j = K; j >0; j--)
        {
            printf("%d ",j);
        }
        K--;
        printf("\n");
    }
    
    return 0;
}