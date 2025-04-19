#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char *ones[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (n <= 9)
    {
        printf("%s ", ones[n-1]);
    }
    else
    {
        printf("Greater than 9");
    }

    return 0;
}