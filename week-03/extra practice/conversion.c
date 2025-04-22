#include <stdio.h>
#include <string.h>

int main()
{
    char str[100005];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // read string from input
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ',')
        {
            str[i] = ' '; // replace ' ' with '\0'
        }
        else if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32; // convert to lowercase
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32; // convert to uppercase
        }
    }
    printf("%s", str); // print string
    return 0;
}