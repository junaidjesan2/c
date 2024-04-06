#include <stdio.h>

int main()
{   
    int A;
    long int B;
    scanf("%d %ld",&A,&B);
    if (1<=A && B<=1000000)
    {
        if (A%B==0)
        {
            printf("Multiples");
        }
        else
        {
            printf("No Multiples");
        }
        
    }
    
    return 0;
}