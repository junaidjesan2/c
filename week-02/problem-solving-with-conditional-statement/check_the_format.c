#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);
    if (x >= 'A' && x <= 'Z')
    {
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }
    else if (x >= 'a' && x <= 'z')
    {
        printf("ALPHA\n");
        printf("IS SMALL");
    }
    else if (x >= '0' && x <= '9')
    {
        printf("IS DIGIT");
    }

    return 0;
}