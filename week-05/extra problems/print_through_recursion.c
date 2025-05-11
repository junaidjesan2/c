#include <stdio.h>

void simple_print(int n)
{
    if (n == 0)
    {
        return;
    }

    simple_print(n - 1);
    printf("I love Recursion\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    simple_print(n);
    return 0;
}