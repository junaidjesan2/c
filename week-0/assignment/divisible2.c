#include <stdio.h>

int main(){
    long int N;
    scanf("%ld",&N);    
    for (int i = 1; i <= N; i++)
    {
        if (i%3==0 && i%7==0)
        {
            printf("%d\n",i);
        }
        
    }
    return 0;
}