#include <stdio.h>

int main()
{   
    int A;
    long int B;
    scanf("%d %ld",&A,&B);
    if (0<=A && B<=100)
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