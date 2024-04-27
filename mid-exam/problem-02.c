#include <stdio.h>
#include <string.h>

int main()
{  
    char S[100001];
    scanf("%s",&S);
        
    
    int consonants=0;
    for (int i = 0; i < strlen(S); i++)
    {
            if (S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'a' && S[i] != 'o' && S[i] != 'u' && 'Z'<S[i])
            {
                consonants++;
            }
    }

    printf("%d",consonants);

    return 0;
}