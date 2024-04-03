
#include <stdio.h>

int main()
{
    // int sum=0;

    // for (int i = 0; i <= 10; i++)
    // {
    //     int divi=i%2;

    // if (divi==0)
    // {
    //     sum += i;
    // }
    // }
    // printf("%d",sum);


    int sum=0;

    for (int i = 0; i <= 100; i++)
    {
        int divi=i%2;

    if (divi==0)
    {
        sum += i;
        if (sum >500)
        {
            // break;
            continue;;
        }
        
    }
    }
    printf("%d",sum);
    
    
}