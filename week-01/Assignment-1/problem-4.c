#include <stdio.h>
int main()
{
    long int N;
    scanf("%ld",&N);
    if (N<=10000 && N>0)
    {
        for (int i = 21; i < N; i++)
        {
            if (i%3==0 && i%7==0)
        {
            printf("%ld\n",i);
        }
        }  
    }
    
    return 0;
}