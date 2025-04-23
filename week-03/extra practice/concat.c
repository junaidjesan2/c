#include<stdio.h>
#include<string.h>

int main(){
    char str[1005];
    scanf("%s", str);
    char st[1005];
    scanf("%s", st);
    strcat(str, st);
    printf("%s %s", str, st);
    return 0;
}