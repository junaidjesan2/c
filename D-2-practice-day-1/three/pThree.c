#include <stdio.h>

int main()
{
    int number;
    scanf("%d",&number);
    int sum = number%2;
    if (sum==0)
    {
        printf("This is a Even Number");
    }
    else
    {
        printf("This is a Odd Number");
    }
    return 0;
}