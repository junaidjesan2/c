#include <stdio.h>

int main()
{  
    char character;
    scanf("%c",&character);
    if (character >=97)
    {
        int answer=character-32;
        printf("%c",answer);
    }
    else if (character<= 97)
    {
        int answer2=character+32;
        printf("%c",answer2);
    }
    
    
    return 0;
}