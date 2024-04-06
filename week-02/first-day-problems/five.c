#include <stdio.h>

int main()
{  
    char character;
    scanf("%c",&character);
    if (character >=97 && character<=122)
    {
        printf("ALPHA\nIS SMALL");
    }
    else if (character >=65 && character<=90)
    {
        printf("ALPHA\nIS CAPITAL");
    }
    else
    {
        printf("IS DIGIT");
    }
    
    
    return 0;
}