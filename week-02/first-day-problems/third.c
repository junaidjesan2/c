#include <stdio.h>

int main()
{  
    char character;
    scanf("%c",&character);
    if (character >=97 && character<=122)
    {
        int answer=character-32;
        printf("%c",answer);
    }
    else
    {
        int answer2=character+32;
        printf("%c",answer2);
    }
    
    
    return 0;
}