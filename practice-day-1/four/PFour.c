#include <stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if (number>0)
    {
        printf("It's a positive number");
    }
    else if (number<0)  
    {
        printf("it's a negative number");
    }
    else
    {
        printf("it's zero");
    }
    
    return 0;
}