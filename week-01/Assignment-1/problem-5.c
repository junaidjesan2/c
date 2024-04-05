#include <stdio.h>
int main()
{
    long int N;
    scanf("%ld",&N);
    if (N<=1000)
    {
       printf("Bad luck");
    }
    else if (N>1000)
    {
        printf("I will buy Punjabi\n");
        if (N-1000>=500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes");
        }
        
    }
    
    
    return 0;
}