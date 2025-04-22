#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char A[101];    // assuming max n = 100
        scanf("%s", A); // read string

        if (strlen(A) <= 10)
        {
            printf("%s\n", A);
        }
        else
        {
            printf("%c", A[0]);
            printf("%d", strlen(A) - 2);
            printf("%c\n", A[strlen(A) - 1]);
        }
    }

    return 0;
}