#include <stdio.h>

int main()
{  
    int n,k=1;
    scanf("%d",&n);
    int j[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&j[i]);
    }
    int x;
    scanf("%d",&x);
    int matched=0;

    for (int i =0; i < n-1; i++)
    {
        for (int c = i+1; c <n ; c++)
        {
            int sum= j[i]+j[c];
            if (sum==x)
            {
                matched=1;
            }
        }
    }

        if (matched==0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    
    
    return 0;
}