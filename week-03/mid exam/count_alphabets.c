#include <stdio.h>
#include <string.h>

int main()
{  
    int T;
    scanf("%d",&T);
    
    for (int i = 1; i <= T; i++)
    {
        char S[10001];
        scanf("%s",&S);

        int small=0;
        int number=0;
        int capital=0;

        for (int i = 0; i <= strlen(S); i++)
        {
            if ('A'<=S[i] && S[i]<='Z')
            {
                capital++;
            }

            if ('a'<=S[i] && S[i]<='z')
            {
                small++;
            }
            
            if (S[i] > 0 && S[i]<='9')
            {
                number++;
            }
            
        }
        printf("%d %d %d\n",capital,small,number);
    }
    
    
    return 0;
}