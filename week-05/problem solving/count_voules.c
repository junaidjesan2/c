#include <stdio.h>
#include <string.h>
#include <math.h>

void count_Vowels(int *count, char str[], int i)
{
    if (str[i] == '\0')
    {
        return;
    }

    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    {
        (*count)++;
    }
    count_Vowels(count, str, i + 1);
}
int main()
{
    char str[200];
    fgets(str, sizeof(str), stdin);

    int count = 0, i = 0;
    count_Vowels(&count, str, i);
    printf("%d", count);
    return 0;
}