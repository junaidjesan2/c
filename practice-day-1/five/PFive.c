#include <stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);

    if (tk>=10000)
    {
        
        printf("gucci Bag\n");
        if (tk>20000)
        {
            printf("gucci belt");
        }
    }
    else if (tk>=5000)
    {
        printf("Levis Bag");
    }
    else
    {
        printf("something");
    }
    
    
    return 0;
}