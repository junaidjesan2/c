#include <stdio.h>

void print_n(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d\n", n);
    print_n(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_n(n);
    return 0;
}