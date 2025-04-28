#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int num;
    int zero=0,one=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num == 0)
        {
            zero++;
        }
        else if (num == 1)
        {
            one++;
        }
    }
    printf("%d %d", zero, one);
    
    return 0;
}