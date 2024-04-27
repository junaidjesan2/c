#include <stdio.h>
#include <string.h>

int main()
{  
    int N,K;
    scanf("%d",&N);
    scanf("%d",&K);
    for (int i = 1; i <= N; i++)
    {
        for (int p = 1; p <=K ; p++)
        {
            printf("%d ",p);
        }
    
    printf("\n");
    }
    return 0;
}