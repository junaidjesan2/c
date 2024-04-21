
#include <stdio.h>

int main()
{  
    char a[8];
    for (int i = 0; i < 10; i++)
    {
        scanf("%c",&a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
    printf("%c",a[i]);
    }
    printf("%d",sizeof(a));
    return 0;
}