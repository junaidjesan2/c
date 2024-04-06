#include <stdio.h>

int main()
{  
    int X;
    scanf("%d",&X);
    if (X>999 && X<=9999)
    {
        int firstDigit= X /1000;

        if (firstDigit % 2 ==0)
        {
            printf("EVEN");
        }
        else if (firstDigit % 2 ==1)
        {
            printf("ODD");
        }
        
    }
    
    return 0;
}