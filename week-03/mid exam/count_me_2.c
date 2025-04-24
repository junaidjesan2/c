#include<stdio.h>
#include<string.h>

int main(){
    char s[100005];
    scanf("%s", s);
    int ct=0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]!='a'&& s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
        {
            ct++;
        }
    }
    printf("%d", ct);
    
    return 0;
}