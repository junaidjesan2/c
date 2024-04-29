#include <stdio.h>

int main()
{  
    int n;
    scanf("%d",&n);
    int j[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&j[i]);
    }

    for (int i =0; i < n-1; i++)
    {
        for (int c = i+1; c <n ; c++)
        {
            if (j[i]>j[c])
            {
                int tmp=j[i];
                j[i]=j[c];
                j[c]=tmp;
            }
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",j[i]);
    }
    
    return 0;
}