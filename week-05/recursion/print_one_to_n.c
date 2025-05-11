#include <stdio.h>

void print_n(int i, int n)
{
    if (i == n)
    {
        return;
    }
    printf("%d\n", i + 1);
    print_n(i + 1, n);
}
int main()
{
    int n, i;
    scanf("%d", &n);
    print_n(i, n);
    return 0;
}